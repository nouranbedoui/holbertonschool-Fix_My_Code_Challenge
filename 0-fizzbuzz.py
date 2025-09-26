#!/usr/bin/env python3
# FizzBuzz: print numbers from 1 to n with Fizz, Buzz, FizzBuzz

import sys

n = int(sys.argv[1])

for i in range(1, n + 1):
    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz", end=" ")
    elif i % 3 == 0:
        print("Fizz", end=" ")
    elif i % 5 == 0:
        print("Buzz", end=" ")
    else:
        print(i, end=" ")
print()
