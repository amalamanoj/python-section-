'''
Author:Amala Manoj
Date:25-10-2024
'''number=int(input("Enter a number"))
number1=number
sum_of_digit=0
while number>0:
    remainder=number%10

    sum_of_digit=sum_of_digit+remainder*remainder*remainder
    number=number//10
if sum_of_digit==number1:
    print("number is amstrong")
else:
    print("number is not amstrong")