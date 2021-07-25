# cook your dish here
for i in range(int(input())):
    n,x=map(int, input().split())
    arr= list(map(int, input().split()))
    used_chocolate=[]
    count=0
    count_for_bro=0
    for j in range(n):
        if arr[j] not in used_chocolate :
            count+=1 
            used_chocolate.append(arr[j])
        else:
            count_for_bro+=1 
    if count_for_bro<x :
        dec= x - count_for_bro 
        count -= dec 
    print(count)