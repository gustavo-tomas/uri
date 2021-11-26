# -*- coding: utf-8 -*-
import datetime

n = int(input())
for i in range(n):
  dates = input()
  d1,d2 = dates.split(" ")
  d1 = list(map(int, d1.split("-")))
  d2 = list(map(int, d2.split("-")))
  d1 = datetime.date(d1[0], d1[1], d1[2])
  d2 = datetime.date(d2[0], d2[1], d2[2])
  res = d1 - d2
  print(abs(res.days))
  
