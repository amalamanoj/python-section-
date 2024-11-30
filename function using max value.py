'''
Author:Amala Manoj
Date:30-11-2024
'''
def number(list):
    list.sort()
    print("The maximum value is:",list[2])

num1=int(input("Enter a number:"))
num2=int(input("Enter a number:"))
num3=int(input("Enter a number:"))
list=[num1,num2,num3]
number(list)
