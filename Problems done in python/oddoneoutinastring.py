def checkstr(string):
	freq_disc={}
	for i in range(0,len(string)):
		if freq_disc.get(string[i])==None:
			freq_disc[string[i]]=1
		else:
			freq_disc[string[i]]+=1
	for i in range(0,len(string)):
		if freq_disc[string[i]]==1:
			print(string[i],end=" ")

string=input()
checkstr(string)
