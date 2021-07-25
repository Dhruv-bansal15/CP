
def find_the_odd_one_out(arr):
    dic= {} 
    for i in range(0,len(arr)):
    	if arr[i] in dic:
    		dic[arr[i]]+=1
    	else:
    		dic[arr[i]]=1
    for i in dic.keys():
    	if dic[i] %2 !=0:
    		print(i)
T=int(input())
for i in range(T):
    n=int(input())
    li=list(map(int, input().split()))
    find_the_odd_one_out(li)
    

        
    