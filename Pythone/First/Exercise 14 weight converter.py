print("Which Unit do you want for input?")
is_weight = int(input("If in Kilogram press 1 \nIf in Pound Press 2:\n"))
if is_weight == 1:
    kg = input("Input your weight in kg\n")
    pound = float(kg) * 2.20462
    print(f"Your Weight is {pound} lbs:")

elif is_weight == 2:
    pound = input("Input your weight in Pounds\n")
    kg = float(pound) / 2.20462
    print(f"Your weight is {kg} Kilograms:")

else:
    print("Invalid Input")
