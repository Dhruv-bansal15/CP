def functionn(n,x,upper_bound):
	if n<0 or x<0 or n>upper_bound:
		return 0
	elif x==0:
		if n==0:
			return 1
		else:
			return 0
	our_ans= functionn(n - 3,x - 1 ,upper_bound) + functionn(n - 2, x - 1, upper_bound) + functionn(n - 1, x - 1, upper_bound) + functionn(n,x - 1,upper_bound) functionn(n + 1,x - 1,upper_bound) functionn(n + 2,x - 1,upper_bound) functionn(n + 3,x - 1,upper_bound)
	return our_ans

	






