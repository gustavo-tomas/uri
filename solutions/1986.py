# -*- coding: utf-8 -*-
size = int(input())
word = input().split()

for hexValue in word:
    intValue = int(hexValue, 16)
    print(chr(intValue), end='')
print()