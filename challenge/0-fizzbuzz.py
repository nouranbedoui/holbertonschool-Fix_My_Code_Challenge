#!/usr/bin/python3
"""
0. FizzBuzz
Print the numbers from 1 to n separated by a space.
Multiples of 3 -> Fizz
Multiples of 5 -> Buzz
Multiples of both 3 and 5 -> FizzBuzz
"""
import sys


def fizzbuzz(n):
    out = []
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            out.append("FizzBuzz")
        elif i % 3 == 0:
            out.append("Fizz")
        elif i % 5 == 0:
            out.append("Buzz")
        else:
            out.append(str(i))
    print(" ".join(out))


if __name__ == "__main__":
    n = 100
    if len(sys.argv) > 1:
        try:
            n = int(sys.argv[1])
        except Exception:
            sys.exit(1)
    fizzbuzz(n)
