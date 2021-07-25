def transpose(list_of_rows, tr, N): 
    for i in range(N): 
        for j in range(N): 
            tr[i][j] = list_of_rows[j][i] 
  
def isSymmetric(list_of_rows, N): 
      
    tr =[[0]*N for i in range(n)] 
    transpose(list_of_rows, tr, N) 
    for i in range(N): 
        for j in range(N): 
            if (list_of_rows[i][j] != tr[i][j]): 
                return False
    return True
def lower_triangular(list_of_rows,n):
	flag = 0
	for i in range(1, n):
	    for j in range(i):
	        if list_of_rows[i][j] != 0:
	            flag = 1
	if flag==1:
		return False
	else:
		return True
def upper_triangular(list_of_rows,n):
 	flag=0
 	for i in range(0,n-1):
 		for j in range(i+1,n):
 			if list_of_rows[i][j]!=0:
 				flag=1
 	if flag==1:
 		return False
 	else:
 		return True

T=int(input())
for i in range(0,T):
	n=int(input())
	list_of_rows=[]
	for i in range(n):
		row1=list(map(int, input().split()))
		list_of_rows.append(row1)

	if isSymmetric(list_of_rows,n):
		s=1
	else:
		s=0
	if lower_triangular(list_of_rows,n) or upper_triangular(list_of_rows,n):
		t=1
	else:
		t=0
	if lower_triangular(list_of_rows,n) and upper_triangular(list_of_rows,n):
		d=1
	else:
		d=0
	print(s+2*t+4*d)
