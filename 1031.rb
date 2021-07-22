while (n = gets.chomp.to_i) > 0
    people = [], backup = []
    for i in 1..n do
        people.push(i)
        backup.push(i)
    end
    k = 1
    while people.length > 1
        curr = 0
        while people.length > 1
            people.delete_at(curr);
            curr = (curr + k - 1) % people.length
        end
        if people[0] != 13
            people = backup.map(&:clone)
        else
            puts k
        end
        k += 1
    end
end