'''
Author:Amala Manoj
Date:29-11-2024
'''
def recursive_mul(num1,num2):
    if num2==1:
        return num1
    else:
        return num1+recursive_mul(num1,num2-1)
num1=int(input("Enter a number:"))
num2=int(input("Enter a number:"))
print("The product of two numbers is",recursive_mul(num1,num2))

