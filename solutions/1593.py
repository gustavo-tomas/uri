# -*- coding: utf-8 -*-

n = int(input())
while n > 0:
  num = bin(int(input()))
  count = 0
  for i in num:
    if i == '1':
      count += 1
  print(count)
  n -= 1
