# for _ in range(int(input())):
#     n,m=map(int, input().split())
#     answer=0
#     for i in range(1,n+1):
#         for j in range(i+1,n+1):
#             if (((m%i)%j)==((m%j)%i)):
#                 answer+=1
#     print(answer)
# def checker(a,b):
#     if (m%a)%b == (m%b)%a :
#         return True
#     else:
#         return False

# for _ in range(int(input())):
#     n,m=map(int, input().split())
#     count= 0
#     if n>m:
#         count+= ((n-m-1)*(n-m))/2
#         count += n-m 
#     if m>n:
#         x=n 
#         for i in range(1,x):
#             for j in range(i+1,x+1):
#                 # print(i,j)
#                 if checker(i, j):
#                     count+= 1
#     else:
#         for i in range(1,m-1):
#             for j in range(i+1,m):
#                 if checker(i, j):
#                     count+= 1
#     print(count) 

for _ in range(int(input())):
    n,m= map(int, input().split())
    arr=[1]*(n+1)
    answer=0
    for i in range(2,n+1):
        temp= m%i 
        answer+= arr[temp]
        for j in range(temp,n+1):
            arr[j] += 1
    print(answer)