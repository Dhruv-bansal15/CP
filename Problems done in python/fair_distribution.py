from random import randrange
def partition(arr, left, right):
	m = left
	pivot_index = randrange(left, right)# we chose the pivot randomly
	pivot = arr[pivot_index]
	arr[right], arr[pivot_index] = arr[pivot_index], arr[right]
	for i in range(left, right):
		if(arr[i] <= pivot):
			arr[i], arr[m] = arr[m], arr[i]
			m += 1

	arr[m], arr[right] = arr[right], arr[m]
	return m

def quicksort(arr, left, right):
	if left >= right:
		return

	pivot_index = partition(arr, left, right)
	quicksort(arr, left, pivot_index - 1)
	quicksort(arr, pivot_index+1, right)

	return arr


def fair_distribution(output,k):
	lo=0
	hi=k-1
	min_difference=1e10
	while hi<len(output):
		difference= output[hi] - output[lo]
		if difference<min_difference:
			min_difference=difference
		lo+=1
		hi+=1
	print(min_difference)

T=int(input())
for i in range(0,T):
	n,k=map(int, input().split())
	arr=list(map(int, input().split()))
	output= quicksort(arr,0,n-1)
	fair_distribution(output,k)



