# code by taylor

import sys

n = int(sys.stdin.readline())
swifts = []
semaphores = []
swifts = list(map(int, sys.stdin.readline().split()))
semaphores = list(map(int, sys.stdin.readline().split()))

k = 1
same = [0]
sw = swifts[0]
se = semaphores[0]
for i in range(1, n+1):
    try:
        if sw == se:
            same.append(k)

        sw += swifts[i]
        se += semaphores[i]
        k+=1

    except:
        pass

print(max(same))