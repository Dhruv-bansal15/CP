for _ in range(int(input())):
    n = int(input())
    database = {} 
    students = 0
    dates = set()
    for i in range(n):
        name, time, date, action, roll_no = map(str, input().split())
        if action == 'Entry':
            students+=1

        time = int(time)
        dates.add(date)
        # Entry or Exit
        roll_no = int(roll_no)
        
        if roll_no in database:
            if date in database[roll_no]:
                database[roll_no][date].append(time)
            else:
                database[roll_no][date] = [time]
        else:
            database[roll_no] = {date:[time]}

    # print(database)
    # print(len(dates))

    time_data = {} # roll no. vs no. of hrs
    for roll in database:
        time_data[roll] = 0
        for din in database[roll]:
            time_data[roll] += database[roll][din][1] - database[roll][din][0]

    time_data_list = []
    for data in time_data:
        time_data_list.append(time_data[data])

    print(max(time_data_list))

    print(int(students/len(dates)))