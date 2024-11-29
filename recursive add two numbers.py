'''
Author:Amala Manoj
Date:29-11-2024
'''
def recursive_add(num1,num2):
    if num2==0:
        return num1
    else:
        return recursive_add(num1+1,num2-1)
num1=int(input("Enter a number:"))
num2=int(input("Enter a number:"))
print("The sum of the two numbers is",recursive_add(2,3))
