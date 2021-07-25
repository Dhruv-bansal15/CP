# Correct this function so that the correct output is given
def get_distinct_fractions(arr):
	dic_of_fractions={}
	for i in range(0,len(arr)):
		a=arr[i][0]
		b=arr[i][1]
		if b!=0:
		    fraction=a/b
		else:
			if a>0:
			    fraction="+inf"
			else:
				fraction="-inf"
		if fraction not in dic_of_fractions:
			 dic_of_fractions[fraction]=arr[i]
		else:
			x=dic_of_fractions[fraction]
			if fraction!="+inf" and fraction!="-inf":
				
			    if fraction>0:
			    	aa=x[0]
			    	if a<aa and a>0:
			    		dic_of_fractions[fraction]=arr[i]
			    	if aa<0 and a>0:
			    		dic_of_fractions[fraction]=arr[i]
			    elif fraction<0:
			    	aa=x[0]
			    	bb=x[1]
			    	if a<0 and aa<0:
			    		if abs(a)<abs(aa):
			    			dic_of_fractions[fraction]=arr[i]
			    	elif b<0 and bb<0:
			    		if a<aa:
			    			dic_of_fractions[fraction]=arr[i]
			    	else:
			    		if a<0:
			    			dic_of_fractions[fraction]=arr[i]
			else:
				aa=x[0]
				if abs(a)<abs(aa):
					dic_of_fractions[fraction]=arr[i]

	result=[]
	
	p=0
	if "-inf" in dic_of_fractions:
		result.append(dic_of_fractions["-inf"])
		del dic_of_fractions["-inf"]
	if "+inf" in dic_of_fractions:
		p=dic_of_fractions["+inf"]
		del dic_of_fractions["+inf"]
	keyss=sorted(dic_of_fractions.keys())
	for i in range(0,len(keyss)):
		result.append(dic_of_fractions[keyss[i]])
	if p!=0:
		result.append(p)

	return result
	
    
 
# ----------------------Do not change anything below this line --------------------------
 
n = int(input())
arr_strip = list(map(int, input().split()))
arr = []
for i in range(0, 2*n, 2):
    arr.append((arr_strip[i], arr_strip[i+1]))
 
result = get_distinct_fractions(arr)
print(len(result))
for x in result:
    print(x[0], x[1], end = ' ')

