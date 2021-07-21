def prime(x)
    if x == 1
        return 0
    end
    if x % 2 == 0
        return (x == 2) ? 1 : 0
    end
    for i in 3..Math.sqrt(x) do
        if x % i == 0
            return 0
        end
    end
    return 1
end

def prime_list(n)
    primes = []
    i = 2
    while n > 0
        if prime(i) == 1
            primes.push(i)
            n -= 1
        end
        i += 1
    end
    return primes
end

while (n = gets.chomp.to_i) > 0
    people = []
    for i in 1..n do
        people.push(i)
    end
    curr = 0
    k = 0
    primes = prime_list(n-1)
    while people.length > 1
        curr = (curr + primes[k].to_i - 1) % people.length
        people.delete_at(curr)
        k += 1
    end
    puts people[0]
end