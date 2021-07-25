def max_overlap(n,m):
        arr= {}
        keys_of_arr= []
        for i in range(0,n):
            s,e = list(map(int, input().split()))
            if s in arr:
                arr[s]+=1
            else:
                arr[s]=1
                keys_of_arr.append(s)
            
            if e+1 in arr:
                arr[e+1]-=1
            else:
                keys_of_arr.append(e+1)
                arr[e+1]=-1
            
        x= 0
        y = 0
        keys_of_arr.sort()
        for i in keys:
            y += arr[i]
            x= max(y,x)
        print(x)

t = int(input())
for i in range(t):

    n = int(input())
    m = int(input())
    max_overlap(n,m)


