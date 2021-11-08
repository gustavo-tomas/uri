while (line = gets.chomp.split(' ')) && line[0] != '0'
    e1,e2,at,d = line.map(&:to_f)
    n1 = (e1/d).ceil
    n2 = (e2/d).ceil
    if at == 3
        win = n1 / (n1 + n2).to_f
    else 
        p = at/6
        q = 1-p
        win = (1 - (q/p)**n1) / (1 - (q/p)**(n1+n2))
    end
    puts "%.1f" % [win*100]
end