problems = int(input())
i = 1
solution = 0
while i<=problems:
    entry = input()
    entry = entry.split(" ")
    a = int(entry[0])
    b = int(entry[1])
    c = int(entry[2])
    if (a * b == 1) or (b * c == 1) or (a * c == 1):
        solution +=1
    i += 1

print(solution)
