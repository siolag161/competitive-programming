

def solve():
    n = int(raw_input())
    k = int(raw_input())

    arr = []
    for i in range(k+1): arr.append(i)
    arr[0] = -1
    flag = True
    count = 0
    while flag:
        count  += 1
        print(arr[1:])
        m = 0
        for i in range(k,-1,-1):
            if arr[i] < n-k+i:
                m = i
                break;
        if m>0:
            arr[m] += 1
            for i in range(m+1, k+1):
                arr[i] = arr[i-1]+1
        else:
            flag = False
    print "%sC%s = %s" %(n,k,count)
if __name__ == '__main__':
    solve()
