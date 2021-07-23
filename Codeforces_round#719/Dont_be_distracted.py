for _ in range(int(input())):
    n=int(input())
    arr=input()
    arr_container=[]
    i=0
    d=False 
    while i<n:
        x= arr[i]
        if x in arr_container:
            print("NO")
            d=True
            break 
        else:
            j=i 
            while( j<n):
                if(arr[j]==x):
                    j+=1 
                else:
                    break
            arr_container.append(x)
            i=j 
    if(d==False):
        print("YES")