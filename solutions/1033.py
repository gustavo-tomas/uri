def fib(n, base, res):
    if(n == 0):
        res[0] = 0
        res[1] = 1
        return

    fib((n // 2), base, res)

    a = res[0]
    b = res[1]
    c = 2 * b - a
    
    if(c < 0):
        c += base

    c = (a * c) % base
    d = (a*a + b*b) % base

    if(n % 2 == 0):
        res[0] = c
        res[1] = d
    else:
        res[0] = d
        res[1] = c + d

n,base = input().split(' ')
n = int(n)
base = int(base)
case = 1

while base > 0:
    res = [0] * 2
    fib(n+1, base, res)
    ans = 2 * res[0] - 1

    print('Case',str(case) + ':',n,base,ans % base)
    n,base = input().split(' ')
    n = int(n)
    base = int(base)
    case += 1