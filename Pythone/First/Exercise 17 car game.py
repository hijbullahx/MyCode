print("\t\t Welcome to the game")
started = False
open =input("press o for open the game menu")
if open.upper() == 'O':
    print("Enter 1 for start the car")
    print("Enter 2 for stop the car")
    print("Enter q for end the game")
    while True:
        command = input("Enter you command\n>")
        if command == '1':
            if started:
                print("The car is already sarted")
            else:
                started = True
                print("The car is started")
        elif command == '2':
            if not started:
                print("The car has been already stooped")
            else:
                started = False
                print("The car has been stopped")
        elif command.lower() == 'q':
            print("Thank you")
            break
        else:
            print("Wrong input, try again")
else:
    print("Try again!")
1