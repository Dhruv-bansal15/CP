def bubblesort(lis):
	no_of_swaps=0
	index_stored=[]
	
	while len(lis)>1:
		max_element=max(lis)
		x=lis.index(max_element)
		lis[x],lis[len(lis)-1]=lis[len(lis) -1],lis[x]
		
		if x!=len(lis)-1:
			index_stored.append([x,len(lis)-1])	
			no_of_swaps+=1	
		lis.pop()
	print(no_of_swaps)
	for i in range(0,len(index_stored)):
		print(index_stored[i][0],index_stored[i][1])

			
n=int(input())
lis=list(map(int ,input().split()))
bubblesort(lis)



