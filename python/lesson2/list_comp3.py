from math import sqrt
n = 100
sqrt_r = int(sqrt(n))
no_primes = {j for i in range(2, sqrt_r + 1) for j in range(i*2, n, i)}
print(no_primes)
