for _ in range(int(input())):
    n,l,r=map(int, input().split())
    arr=list(map(int, input().split()))
    left={}
    right={}
    for i in range(len(arr)):
        if i<=l-1:
            if arr[i] in left.keys():
                left[arr[i]]+=1
            else:
                left[arr[i]]=1
        else:
            if arr[i] in right.keys():
                right[arr[i]]+=1
            else:
                right[arr[i]]=1
    count=0
    for i in left.keys():
        if i in right:
            diff= min(left[i] ,right[i])
            count+= diff
            left[i]-= diff
            right[i]-=diff
    if count>=n/2:
        print("0")
        continue
    cost=0
    if l>r:
        mini= right
    else:
        mini= left
    cost_ = sum(mini.values())
    diff = n/2 - count
    if cost_ >= diff:
        count+= diff
        cost+= diff
    if count>=n/2:
        print(int(cost))
        continue
    diff = n/2 - count
    cost+= int(diff*2)
    print(cost)
        