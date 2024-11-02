import math

def calcular_n(x):
    n = (-1 + math.sqrt(1 + 8 * x)) / 2
    return int(n)

s = int(input())
n = calcular_n(s)

sum_n = n * (n + 1) // 2

if sum_n == s:
    print(0)
else:
    print(n, s - sum_n)