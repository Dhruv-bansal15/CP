def Counting_no_of_coloumns_painted(n,r,g,b):
	atmost_coloumns_that_can_be_painted= min(r,b)
	count=0
	if (atmost_coloumns_that_can_be_painted - g)>=0:
		count= g 
	else:
		count= atmost_coloumns_that_can_be_painted
		return count
	color_with_less_amount_left= atmost_coloumns_that_can_be_painted - g #from red and blue
	color_with_large_amount_left= max(r,b) - g                           #from red and blue

	if color_with_less_amount_left==color_with_large_amount_left:
		count+= (color_with_large_amount_left * 2)//3
		if count>n:
			return n
		return count
	else:
		while color_with_less_amount_left>0 and color_with_large_amount_left>0:
			color_with_large_amount_left-=2
			color_with_less_amount_left-=1
			count+=1
			if color_with_large_amount_left==color_with_less_amount_left:
				count+= (color_with_large_amount_left*2)//3
				if count>n:
					return n
				return count
		if count>n:
			return n
		return count
	if count>n:
		return n 
	return count

T= int(input())
for i in range(0,T):
	n,r,g,b = map(int, input().split())
	result= Counting_no_of_coloumns_painted(n,r,g,b)
	print(result)
