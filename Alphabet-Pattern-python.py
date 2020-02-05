start=0
fin=6
for i in range(4):
    for j in range(7):
        if i==j:
            print("*", end="")
        elif i==start and j==fin:
            print("*", end="")
            start+=1
            fin-=1
        else:
            print(end=" ")
    print()

