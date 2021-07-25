import math

T=int(input())
for i in range(T):
	n=int(input())
	list_of_max_in_a_particular_pair=[]
	for i in range(0,math.floor(n**0.5 + 1)):
		j= int(math.sqrt(n - i**2))
		if (i**2 + j**2)==n:
			max_value=max(i,j)
			list_of_max_in_a_particular_pair.append(max_value)
	list_of_max_in_a_particular_pair.sort()
	if len(list_of_max_in_a_particular_pair)>=2:

		pair1=(int(math.sqrt(n- (list_of_max_in_a_particular_pair[0])**2)),list_of_max_in_a_particular_pair[0])
		pair2=(int(math.sqrt(n- (list_of_max_in_a_particular_pair[1])**2)), list_of_max_in_a_particular_pair[1])
		print(pair1[0],pair1[1],pair2[0],pair2[1])
	else:
		print("-1 -1 -1 -1")


