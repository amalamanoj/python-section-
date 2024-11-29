'''
Author:Amala Manoj
Date:29-11-2024
def factorial(n):
    if n==1:
        return 1
    else:
        return n*factorial(n-1)
f=int(input("Enter a number:"))
n=factorial(f)
print("factorial of given number",f,"is",n)
