import sys

f = {}
f[1001]=0
f[1000]=2
f[2000]=3
f[2001]=1
f[1002]=0
f[0]=0
f[1]=0
f[2]=0

for i in range(3,102):
    key = i*1000
    f[key] = f[key-1000]+f[key-2000]
    f[i] = 0
    f[1000+i] = 0
    
def count(n, k):
    key = n*1000+k
    if not f.has_key(key):
        f[key] = count(n-1, k)+count(n-2, k)+count(n-1, k-1)-count(n-2, k-1)
    return f[key]
    
N = int(raw_input())
for i in range(N):
    line = sys.stdin.readline() 
    [j, n, k] = [int(nbr) for nbr in line.split()]
    print j, count(n,k)
