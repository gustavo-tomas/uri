# -*- coding: utf-8 -*-

while True:
  try:
    n = input()
    while n[len(n)-1] != "#":
      n = n + input()
    n = int(n.strip("#"), 2)
    if n % 131071 == 0:
      print("YES")
    else:
      print("NO")
  except:
    break
