# def min_oper(N):
#     if N==2:
#         return 1
#     elif N==3:
#         return 1
#     elif N==1:
#         return 0
#     else:
#         count=0
#         while N!=1:
#             if N%3 !=0 and N%2 !=0:
#                 N-=1
#                 count+=1
#             elif N%3==0 and N%2==0:
#                 N= N/3
#                 count+=1
#             elif  N%3==0:
#                 N= N/3
#                 count+=1
#             else:
#                 if (N - 1)%3==0:
#                     N-=1
#                     count+=1
#                 else:
#                     N = N/2
#                     count+=1
#         return count
            
                

# N=int(input())
# print(min_oper(N))

#OR

# def min_operations_top_down(n):
#     dp=[-1]*(n + 1)

#     if n==3 or n==2:
#         return 1
#     if n==1:
#         return 0
#     if n<1:
#         return 10**18
#     if dp[n]!= -1:
#         return dp[n]
#     c1=c2=c3=10**18
#     if n%3==0:
#         c3=1 + min_operations_top_down(n//3)
#     if n%2==0:
#         c2 = 1 + min_operations_top_down(n//2)
#     c1= 1 + min_operations_top_down(n - 1)
#     dp[n] = min(c1,c2,c3) 
#     return dp[n]
def min_operations_bottom_up(n):
    if n==3 or n==2:
        return 1
    if n<1:
        return 10**18
    if n==1:
        return 0
    dp[0] = 10**18
    dp[1] = 0
    dp[2] = dp[3] = 1
    for i in range(4,n+1):

        c1=c2=c3=10**18
        if n%3==0:
            c3= 1 + min_operations_bottom_up(n//3)
        if n%2==0:
            c2 = 1 + min_operations_bottom_up(n//2)
        c1= 1 + min_operations_bottom_up(n - 1)
        dp[i] = min(c1,c2,c3) 
    return dp[n]
n=int(input())
dp=[0]*(n + 1)
print(min_operations_bottom_up(n))
