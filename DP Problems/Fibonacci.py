# def fib_recurrsive(N):
#     if N==0 or N==1:
#         return N
#     ans= fib_recurrsive(N - 1) + fib_recurrsive(N - 2)

# def fib_top_down(N):
#     dp= [-1]*(N + 2)
#     dp[0] = 0
#     dp[1] = 1
#     if N==0 or N==1:
#         return dp[N]
#     if dp[N]!= -1:
#         return dp[N]
#     dp[N] = fib_top_down(N - 1) + fib_top_down(N - 2)
#     return dp[N]
def fib_bottom_up(N):

    dp=[-1]*(N + 1)
    if N==0 or N==1:
        return N
    dp[0] = 0
    dp[1]=1
    for i in range(2,N+1):
        dp[i]= dp[i-1] + dp[i-2]
    return dp[N]
N= int(input())
print(fib_bottom_up(N))