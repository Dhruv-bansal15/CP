events=int(input())
entry_dic={}
exit_dic={}
vehicle_plate=[]

for i in range(0,events):
	x=input()
	if x=="entry":
		vehicle_num=input()
		vehicle_plate.append(vehicle_num)
		entry_time=int(input())
		entry_dic[vehicle_num]=entry_time
	elif x=="exit":
		vehicle_num=input()
		exit_time=int(input())
		exit_dic[vehicle_num]=exit_time
total_toll=0
for j in range(0,len(vehicle_plate)):
	vehicle=vehicle_plate[j]
	time=int(exit_dic[vehicle])-int(entry_dic[vehicle])
	if time%60==0:
		round_time=time//60
	else:
		round_time=time//60+1
	total_toll+=60+ (round_time-1)*30
print(int(total_toll))