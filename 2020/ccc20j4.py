# failed this 2 times, is it over for me?
# moral of the lesson: use python for simple string questions like this

target = input()
inp = input()
found = False

for i in range(len(inp)):
    if inp in target:
        found = True
        print('yes')
        break
    inp = inp[-1] + inp[:-1]

if (not found):
    print('no')