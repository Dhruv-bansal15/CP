from operator import itemgetter

def pair_sort(arr,n):
	i=0
	while i<n-1:
		counter=0
		j=i 
		while j<n-1:
			if arr[j][1]==arr[j+1][1]:
				counter+=1
				j+=1
			else:
				break
		if counter>0:
			arr[i:j+1]=sorted(arr[i:j+1],key=itemgetter(0))
		i+=j+1


	for i in range(len(arr)):
		print(arr[i][0],arr[i][1], end=" ")

N=int(input())
arrayA= list(map(int, input().split()))
arrayB= list(map(int, input().split()))
tuple_of_corresponding_arrays_elements=[]
for i in range(N):
	tuple_of_corresponding_arrays_elements.append((arrayA[i],arrayB[i]))
tuple_of_corresponding_arrays_elements.sort(key=itemgetter(1),reverse=True)

pair_sort(tuple_of_corresponding_arrays_elements,N)