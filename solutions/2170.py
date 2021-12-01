# -*- coding: utf-8 -*-

count = 1
while True:
  try:
    a, b = map(float, input().split(" "))
    res = (b / a - 1) * 100
    print("Projeto " + str(count) + ":")
    print("Percentual dos juros da aplicacao: ", end='')
    print("{:>0.2f} %\n".format(res))
    count += 1
  except EOFError:
    break
