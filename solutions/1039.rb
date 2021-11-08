while values = gets
    values = values.split(' ').map(&:to_f)
    dist = Math.sqrt((values[1]-values[4])**2 + (values[2]-values[5])**2)
    dist += values[3];
    if dist > values[0]
        puts 'MORTO'
    else
        puts 'RICO'
    end
end