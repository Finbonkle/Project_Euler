# define limit
LIMIT = 1000
i3 = 3
i5 = 5
sum = 0
while i3 < 1000:
    if i3 % 5 != 0:
        sum += i3
    i3 += 3

    if i5 < 1000:
        sum += i5
        i5 += 5

print("python sum is %d" % sum)
