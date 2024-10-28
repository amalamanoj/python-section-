
'''
Author:Amala Manoj
Date:28-10-2024
Description:Write a menu-driven Python program that allows users to convert temperatures between Celsius and Fahrenheit. The program should repeatedly display a menu with three options:

'''while True:
    print("\n1.\tcovert celsius to fahrenheit")
    print("2.\tcovert fahrenheit to celsius")
    print("3.\tExit the program")
    option=int(input("Enter your option: "))
    if option==1:
        temperature=int(input("Enter a temperature in celsius"))
        f= (temperature * 9 / 5) + 32
        print(f"f: {f}")
    elif option==2:
        temperature=int(input("Enter a temperature in fahrenheit"))
        C= (temperature- 32) * 5/9
        print(f"C:{C}")
    elif option==3:
        break

