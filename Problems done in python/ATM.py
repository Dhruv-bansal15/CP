withdraw,Current_balance= map(float, input().split())
if (withdraw + 0.50) <= Current_balance and int(withdraw)%5==0:
    balance = Current_balance - (withdraw + 0.50)
    print('%.2f' % balance)
else:
    print('%.2f' % Current_balance)