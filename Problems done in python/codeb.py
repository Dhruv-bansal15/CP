

# # # def pallindrome(n,m,arr):
# # # 	i=0
# # # 	if n==m:
# # # 		diff=arr[-1] - arr[0]
# # # 		print(diff)
# # # 		return
# # # 	difference=arr[i] - arr[i+m-1]
# # # 	i+=1
# # # 	while i<m-n:
# # # 		differ=arr[i] - arr[i+m-1]
# # # 		if differ<difference:
# # # 			difference=differ
# # # 		i+=1
# # # 	return difference

# # # n,m=map(int,input().split())
# # # no_of_toffees=list(map(int, input().split()))
# # # no_of_toffees.sort()
# # # pallindrome(n,m,no_of_toffees)


# # def max_sweets(X):
# # 	lo=1
# # 	hi=10**6
# # 	while lo<=hi:
# # 		midd= lo + (hi- lo)//2
# # 		cost_price= (midd*(midd + 1)*(2*midd + 1))/6
# # 		if cost_price==X:
# # 			print(midd)
# # 			return
# # 		elif cost_price>X:
# # 			hi= midd-1
# # 		else:
# # 			lo= midd + 1
# # 	print(lo)
# # 	return

# # T=int(input())
# # for i in range(T):
# # 	X=int(input())

# def couples(strings):
# 	males_index=[]
# 	i=0
# 	while i<len(strings):
# 		if strings[i]=="M":

# 			males_index.append(i)
# 		i+=1
# 	female_index=[]
# 	i=0
# 	while i<len(strings):
# 		if strings[i]=="F":
# 			female_index.append(i)
# 		i+1
# 	counter=0
# 	for i in range(len(males_index))-1:
# 		if males_index[i] != males_index[i+1] + 1:
# 			counter+=1

# 	print(counter+1)

# T=int(input())
# for i in range(T):
# 	x=input()
# 	couples(x)


t = int(input())
while t>0:
    n= int(input())
    s= input()
    count=0
    mcount=0
    fcount=0
    for i in range(len(s)):
        if(s[i]=='M'):
            mcount+=1
        if(s[i]=="F"):
            fcount+=1
        if fcount==mcount and fcount!=0:
            count+=1
            fcount,mcount=0,0

    print(count)
    t-=1