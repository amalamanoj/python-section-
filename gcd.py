def gcd(num1,num2):
    if num1%num2==0:
        return num2
    else:
        return gcd(num2,num1%num2)
num1=int(input("Enter a number:"))
num2=int(input("Enter a number:"))
print("The result is ",gcd(1220,516))
