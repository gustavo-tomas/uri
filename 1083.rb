$ops = ['^','*','/','+','-','<','>','=','#','.','|']
$sym = ['^','*','/','+','-','<','>','=','#','.','|','(',')']

def is_op(val)
    for i in $ops do
        if val == i
            return true
        end
    end
    return false;
end

def is_sym(val)
    for i in $sym do
        if val == i
            return true
        end
    end
    return false;
end

def precedence(val)
    if val == '^'
        return 6
    elsif val == '*' || val == '/'
        return 5
    elsif val == '+' || val == '-'
        return 4
    elsif val == '>' || val == '<' || val == '=' || val == '#'
        return 3
    elsif val == '.'
        return 2
    elsif val == '|'
        return 1
    end
    return 0
end

# 0 - No error; 1 - Lexical error; 2 - Syntax error
def check_error(infix)
    open_ = 0
    last = '+'        # arbitrary operation
    for i in infix do
        if !i.match?(/\w/) && !is_sym(i)
            return 1
        end
    end
    for j in 0..infix.length-1 do
        # operands with size > 2 are allowed
        large = 0
        while j < infix.length && infix[j].match?(/\w/)
            j += 1
            large = 1
        end
        if large == 1
            j -= 1
        end
        i = infix[j]
        
        if(i != ')' && i != '(')
            # last was operand, curr must be operation
            if last.match?(/\w/) && !is_op(i)
                return 2
            # last was operation, curr must be operand
            elsif is_op(last) && !i.match?(/\w/)
                return 2
            end
        end
        
        if i == '('
            open_ += 1
        elsif i == ')'
            open_ -= 1
        end
        if open_ < 0
            return 2
        end
        last = i
    end
    if open_ != 0
        return 2
    end
    return 0;
end

def infix_to_post(infix)
    infix.push(')')
    stack = '(', postfix = ''

    for i in infix do
        if i == '('
            stack.push(i)
        elsif i.match?(/\w/)
            postfix += i
        elsif is_op(i)
            while is_op(stack.last) && precedence(stack.last) >= precedence(i)
                postfix += stack.last
                stack.pop()
            end
            stack.push(i)         
        elsif i == ')'
            while stack.last != '('
                postfix += stack.last
                stack.pop()
            end
            stack.pop()
        end
    end
    return postfix
end

lines = gets(nil).split(' ')
for infix in lines do
    infix = infix.split('')
    error = check_error(infix)
    if error == 0
        puts infix_to_post(infix)
    elsif error == 1
        puts "Lexical Error!"
    else
        puts "Syntax Error!"
    end
end