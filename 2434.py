# -*- coding: utf-8 -*-
_input = input()
n, balance = _input.split()
n = int(n)
balance = int(balance)
worst = balance

while n:
    n -= 1
    value = input()
    balance += int(value)
    worst = balance if balance < worst else worst

print(worst)