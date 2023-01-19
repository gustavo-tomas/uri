def fib(a, b):
  
  count = 0
  
  x = 0
  y = 1
  z = 0

  while z <= b:

    z = x + y
    x = y
    y = z

    if z >= a and z <= b:
      count += 1

  return count


while True:
  line = input().split(' ')
  a = int(line[0])
  b = int(line[1])

  if a == 0 and b == 0:
    break

  print(fib(a,b))
