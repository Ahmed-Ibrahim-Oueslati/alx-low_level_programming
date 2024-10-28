fhand = open(input('put il ficha :'))
sum = 0

for line in fhand:
    try:
        sum = sum + int(line)
    except:
        continue
print(sum)