# -*- coding: utf-8 -*-

from collections import Counter

def fat(n):
  ans = 1
  while (n > 1):
    ans *= n
    n -= 1
  return ans

while True:
  mod = 1000000007
  try:
    word = input()
    count = Counter(word)
    ans = fat(len(word))
    div = 1
    for c in count:
      div *= fat(count[c])
    ans = ans // div
    print(ans % mod)
  except EOFError:
    break
