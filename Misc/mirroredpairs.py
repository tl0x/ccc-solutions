# https://dmoj.ca/problem/a2

print("Ready")

inp = ""
while (inp != "  "):
    inp = input()
    if (inp == "pq" or inp == "bd" or inp == "db" or inp == "qp"):
        print("Mirrored pair")
    elif (inp == "  "):
        break
    else:
        print("Ordinary pair")
