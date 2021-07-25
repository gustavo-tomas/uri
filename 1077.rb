def is_op(val)
    if  val == '-' || val == '+' || val == '*' ||
        val == '/' || val == '^'
       return true
    end
    return false;
end

def precedence(val)
    if val == '^'
        return 3;
    elsif val == '*' || val == '/'
        return 2;
    elsif val == '+' || val == '-'
        return 1;
    end
    return 0;
end

n = gets.chomp.to_i + 1
while (n -= 1) > 0
    infix = gets.chomp.split('')
    infix.push(')')
    stack = '(', postfix = ''

    for i in infix do
        if i == '('
            stack.push(i);
        elsif i.match?(/\w/)
            postfix += i;
        elsif is_op(i)
            while is_op(stack.last) && precedence(stack.last) >= precedence(i)
                postfix += stack.last;
                stack.pop();
            end
            stack.push(i);                    
        elsif i == ')'
            while stack.last != '('
                postfix += stack.last;
                stack.pop();
            end
            stack.pop();
        end
    end
    puts postfix
end