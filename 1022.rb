def gcd(a,b)
    return (a == 0) ? b : gcd(b % a, a)
end

n = gets.chomp.to_i + 1
while (n -= 1) > 0
    line = gets.chomp.split(' ')
    n1,lol,d1,op,n2,lol,d2 = line
    n1 = n1.to_i
    d1 = d1.to_i
    n2 = n2.to_i
    d2 = d2.to_i

    if op == '+'
        nr = n1 * d2 + n2 * d1
        dr = d1 * d2
    elsif op == '-'
        nr = n1 * d2 - n2 * d1
        dr = d1 * d2
    elsif op == '*'
        nr = n1 * n2
        dr = d1 * d2
    else
        nr = n1 * d2
        dr = n2 * d1
    end
    div = gcd(nr.abs,dr.abs)
    puts '%d/%d = %d/%d' % [nr,dr,nr/div,dr/div]
end