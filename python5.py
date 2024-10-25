'''
Author:Amala Manoj
Date:25-10-2024
'''temperature=int(input("Enter temperature:"))
scale=input("Is this in(C)elsius or (F)ahrenheit?")
f=(9/5*temperature)+32
if scale=="c":

    print(temperature,"celsius is",f,"fahrenheit")
else:
    c=5/9*(temperature-32)
    print(temperature,"fahrenheit is",c,"celsius")
