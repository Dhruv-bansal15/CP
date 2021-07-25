# word1= input()
# word2= input()
# m= len(word1)
# n= len(word2)
# dp = [[0]*m]*n 
# for i in range(1,n + 1):
#     for j in range(1,m + 1):
#         if word1[i - 1]==word2[j - 1]:
#             dp[i][j] = 1 + dp[i - 1][j - 1]
#         else:
#             dp[i][j]= max(dp[i-1][j], dp[i][j-1])

# print(dp[m][n])


#New version where u can change k elements
def fun(arr1,arr2,i,j,k):
    if i==n or j==m:   #Base case 
        return 0
    if dp[i][j][k] != -1:
        return dp[i][j][k]
    if arr1[i]==arr2[j]:
        dp[i][j][k] = 1 + fun(arr1,arr2,i + 1,j + 1,k)
        return dp[i][j][k]
    else:
        c1 = fun(arr1,arr2,i + 1,j,k)
        c2 = fun(arr1,arr2,i,j + 1,k)
        c3 = -1
        if k>0:
            c3= 1 + fun(arr1,arr2,i + 1,j + 1, k - 1 )
        ans= max(c1,c2,c3)
        dp[i][j][k] = ans
        return ans 
        
n,m,k= map(int, input().split())
arr1= list(map(int, input().split()))
arr2= list(map(int, input().split()))
dp=[[[-1]*(6)]*(2010)]*(2010)
print(fun(arr1, arr2, 0, 0, k))
