print("Price of the house is 1M")
is_cradit =input("Buyer has good cradit or not?(y/n)").lower() == 'y'
if is_cradit:
    print("They need to put down:$" + str(1000000 * 0.1))
else:
    print("They need to put down:$" + str(1000000 * 0.2))
