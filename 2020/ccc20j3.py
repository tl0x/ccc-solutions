# I CANNOT be asked to do this in cpp
# code by taylor
# just find the min of the x and y and then the max and subtract 1 and add 1 respectively. Quite simple.

n = int(input())
x = []
y = []
for i in range(n):
    a, b = map(int, input().split(','))
    x.append(a)
    y.append(b)

print(str(min(x)-1) + "," + str(min(y)-1))
print(str(max(x)+1) + "," + str(max(y)+1))
