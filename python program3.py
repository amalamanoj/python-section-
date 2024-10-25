'''
Author:Amala Manoj
Date:25-10-2024
'''
num1=int(input("Enter first number"))
num2=int(input("Enter second number"))
num3=int(input("Enter third number"))
if num3>num1 and num3>num2:
    print("The largest number is:",num3)
elif num1>num2:
    print(num1,"is greater than num2")
else:
    print("The num3 is greater than the other two")
