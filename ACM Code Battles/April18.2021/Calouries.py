N,K= map(int, input().split())
arr= list(map(int, input().split()))
if K==1:
    print(max(arr))
elif K==N:
    print(sum(arr))
else:
    prefix_sum_arr=[]
    summ=0 
    for _ in range(N):
        summ+=arr[_]
        prefix_sum_arr.append(summ)
    max_cal=0
    for i in range(0,N-K+1):
        if i==0:
            sum_= prefix_sum_arr[K-1+i]
        else:
            sum_ = prefix_sum_arr[K-1+i] - prefix_sum_arr[i-1]
        if sum_ > max_cal:
            max_cal = sum_
    print(max_cal)



































