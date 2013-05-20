import math
import sys

primes = {}

def init_primes(N):
    for i in xrange(2,N):
        primes[i] = True
        
    for i in xrange(2,int(math.sqrt(N))+1):
        if primes[i]:
            k = 0
            while(i**2+i*k<=N):
                primes[i**2+i*k] = False    
                k += 1

def count_primes(l, r):
    p = [i for i,j in primes.iteritems() if i>=l and i<=r and j]
    return p


init_primes(1000000001)

N = int(raw_input())
for i in range(N):
    line = sys.stdin.readline() 
    [n, k] = [int(nbr) for nbr in line.split()]
    print count_primes(n, k)
