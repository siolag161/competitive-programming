
x = [0]*1000
x[0] = 1

def printRS(n, k):
    rs = "%d = " %n
    rs += "+".join(str(i) for i in x[1:k+1])
    print(rs)
    
def attemp(n, i):
    mr = (n-sum(x[1:i]))/2
    for j in range(x[i-1], mr+1):
        x[i] = j
        attemp(n, i+1)
    x[i] = n-sum(x[1:i])
    printRS(n, i)
    
def solve():
    n = int(raw_input())
    attemp(n, 1)

if __name__ == '__main__':
    solve()
