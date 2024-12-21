l = [2,2,3,0,3,1,4,2]
uniques = []
for number in l:
    if number not in uniques:
        uniques.append(number)
print(uniques)
