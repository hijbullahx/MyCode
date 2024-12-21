

is_hot= input("Is it a hot day?(y/n)").lower() == 'y'
is_cold = input("Is it a cold day(y/n)?").lower() == 'y'
if is_hot:
    print("This is a sunny day")
    print("try cold water")
elif is_cold:
    print("This is cold day")
    print("wear warm cloths")
else:
    print("this is a lovely day")
print("enjoy your day")

