t = gets.chomp.to_i
for j in 1..t do
    n,k = gets.chomp.split(' ').map(&:to_i)
    people = []
    for i in 1..n do
        people.push(i)
    end
    curr = 0
    while people.length > 1
        curr = (curr + k - 1) % people.length
        people.delete_at(curr);
    end
    puts 'Case %d: %d' % [j , people[0]]
end