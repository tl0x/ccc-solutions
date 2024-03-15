# Solution to https://dmoj.ca/problem/a1

n = int(input())
for i in range(n):
    temp = input()
    letters = temp.split(" ")
    index = int(letters[0])-1

    st = ""
    for g in range(1, len(letters)):
        st += letters[g]
        st += " "

    print(str(i+1) + " " + st[0:index] + st[index+1:])
