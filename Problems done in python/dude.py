
# def if_subsequence_present(binary_no, target):
# 	m= len(binary_no)
# 	n= len(target)
# 	i=0
# 	if n==m:
# 		if binary_no==target:
# 			return True
# 		else:
# 			return False
# 	checker=0
# 	for x in range(m):
# 		if binary_no[x] == target[i]:
# 			i+=1
# 		if i==n:
# 			return True
# 	return False

# def generatePrintBinary(n):
     
    
#     from queue import Queue
#     q = Queue()
    
#     q.put("1")
#     while(n > 0):
#         n -= 1
#         s1 = q.get()
#         arr.append(s1)
#         s2 = s1
#         q.put(s1+"0")
#         q.put(s2+"1")
# n=50
# arr=[]
# arr.append("0")

# generatePrintBinary(n)
# for _ in range(int(input())):
# 	word=input()
# 	mid=1
# 	if not if_subsequence_present(arr[0]):
# 		print(arr)


# 		
for i in range(int(input())):
	N=int(input())
	arr= list(map(int,input().split()))
	low= min(arr)
	index_of_min= arr.index(low)
	count= N*low
	j=low
	if index_of_min==0:
		print(count)
		continue
	while True:
		filled_already=j
		low= min(arr[0:index_of_min])
		index_of_min= arr.index(low)
		j+= arr[index_of_min] - filled_already
		count+= (index_of_min + 1)* (arr[index_of_min] - filled_already)
		if index_of_min==0:
			print(count)
			break

