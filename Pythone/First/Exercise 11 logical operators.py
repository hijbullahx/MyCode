

print("Now the programm is for If the persons has enough money and not taking haram food can go to Hazz\n\t Now the Program is")
has_enough_money = input("If the person has enough money for go to makkah? (y/n)").lower() == 'y'
taking_haram_food = input("If he is taking haram?(y/n)").lower() == 'y'
if has_enough_money and not taking_haram_food:
    print("Can go for Hazz")
else:
    print("Can not go for Hazz")


