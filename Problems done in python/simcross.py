import copy


def Horizontal_row_checker(string, bd, x, y):
    if BD[x][y] == "R" or BD[x][y] == "B":
        ending_of_Y = y+len(string)-1
        if ending_of_Y < len(bd[0]) and (BD[x][ending_of_Y] == "B" or BD[x][ending_of_Y] == "R"):
            for i in range(0,len(string)):
                if bd[x][y+i] == "." or bd[x][y+i] == string[i] or bd[x][y+i] == "C":
                    continue
                elif bd[x][y] == "B" or bd[x][y] == "R":
                    continue
                elif (bd[x][y+i] == "B" or bd[x][y+i] == "R") and i == len(string)-1:
                    continue
                else:

                    return False
            return True
        else:
            return False
    else:
        return False


def Vertical_coloumn_checker(string, bd, x, y):
    if BD[x][y] == "C" or BD[x][y] == "B":
        ending_of_X = x+len(string)-1
        if ending_of_X < len(bd) and (BD[ending_of_X][y] == "B" or BD[ending_of_X][y] == "C"):
            for i in range(len(string)):
                if bd[x+i][y] == "." or bd[x+i][y] == string[i] or bd[x+i][y] == "R":
                    continue
                elif bd[x][y] == "B" or bd[x][y] == "C":
                    continue
                elif (bd[x+i][y] == "B" or bd[x+i][y] == "C") and i == len(string)-1:
                    continue
                else:
                    return False
            return True
        else:
            return False
    else:
        return False


def Horizontal_row_filler(string, bd, x, y):

    bd[x] = bd[x][:y] + string + bd[x][y+len(string):]
    return bd


def Vertical_row_filler(string, bd, x, y):

    for i in range(0,len(string)):
        bd[x+i] = bd[x+i][:y] + string[i] + bd[x+i][y+1:]

    return bd

n, m = list(map(int, input().split()))

BD = []
for i in range(0,n):
    row = input()
    row = row.replace("b", "B")
    row = row.replace("c", "C")
    row = row.replace("r", "R")
    BD.append(row)

w =  int(input())
words_dictionary = {}

for i in range(0,w):
    string = input()
    words_dictionary[len(string)] = string

bd = copy.deepcopy(BD)

for x in range(0,n):
    for y in range(m):
        if BD[x][y] == "B" or BD[x][y] == "R":
            Y = y+1
            while BD[x][Y]!="B" and BD[x][Y]!="R":
                Y+=1
            length = Y-y+1
            if Horizontal_row_checker(words_dictionary[length], bd, x, y):
                bd = Horizontal_row_filler(words_dictionary[length], bd, x, y)
                break
            else:
                print("Invalid")
                exit()
    
for y in range(0,m):
    for x in range(0,n):
        if BD[x][y] == "B" or BD[x][y] == "C":
            X =x+1
            while BD[X][y] != "B" and BD[X][y] != "C":
                X+=1
            length = X-x+1
            if Vertical_coloumn_checker(words_dictionary[length], bd, x, y):
                board = Vertical_row_filler(words_dictionary[length], bd, x, y)
                break
            else:
                print("Invalid")
                exit()

for row in bd:
    print(row)
