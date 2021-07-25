def Subsets(n,indexx,output):
	if indexx==n:
		x=sorted(output)
		for i in range(0,len(output)):

		    print(x[i],end=" ")
		print(" ")
		return

	#assumption case
	Subsets(n, indexx+1,output)
	output.append(n-indexx)
	Subsets(n, indexx+1,output)
	output.pop()

T=int(input())

for i in range(0,T):
    n=int(input())
    Subsets(n+1, 1, [])