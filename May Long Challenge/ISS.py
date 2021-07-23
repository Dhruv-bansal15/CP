# def fun(a,b):
#     if b==0:
#         return a 
#     return fun(b,a%b)
# answer=0
# for _ in range(int(input())):
#     k=int(input())
#     for i in range(1,2*k + 1):
#         x= i+1
#         answer+= fun(k + i*i, k + x*x)
#     print(answer%(10**9 + 7))
import math
def printDivisors(n) :
    i = 1
    while i <= math.sqrt(n) + 1 :
        if (n % i==0) :
            arr.append(i)
            # print (i)
        i = i + 1
for _ in range(int(input())):
    k=int(input())
    bigger= 4*k + 1 
    arr=[]
    count=1 
    answer= bigger
    printDivisors(bigger)
    
    for i in range(1,len(arr)):
        no_of_occurences= (2*k - 1)//(arr[i])
        answer+= no_of_occurences*arr[i]
        count+= no_of_occurences 
    answer+= 2*k - count
    print(answer)