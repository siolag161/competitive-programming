

def solve():
    n = int(raw_input())
    arr = [0]*(n+1)
    arr[0] = -1
    flag = True
    
    while flag:
        print(arr[1:])

        k = n
        while (k>=0):
            if arr[k] == 0:
                break;
            k = k-1
        if k>0:
          arr[k] = 1
          for i in range(k+1, n+1):
            arr[i] = 0
        else:
          flag = False
    
if __name__ == '__main__':
    solve()
