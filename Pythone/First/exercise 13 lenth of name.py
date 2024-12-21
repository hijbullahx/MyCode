name = input("What is your name?")
if len(name)<3:
    print("Name must be more than 3 character")
elif len(name)>10:
    print("Name must be under 10 character")
else:
    print("It's look like a perfect name")