# -*- coding: utf-8 -*-
import math

def fat(n):
  return math.factorial(n)

[d, n] = map(int, input().split())
res = (1.0 - fat(d) / (d**n * fat(d - n))) * 100.00
print("{:.2f}".format(res))
