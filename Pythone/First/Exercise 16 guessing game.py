secret_number = 7
count = 0
count_limit = 3
print("You have only three chance for guess")
while count < count_limit:
    g = int(input("Guess:"))
    count += 1
    if g == secret_number:
        print("You won")
        break
else:
    print("You failed")
