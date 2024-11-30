'''
Author:Amala Manoj
Date:30-11-2024
'''
def mul_of_list(list):
    sum=1
    for i in list:
        sum=sum*i
    print(sum)
list=[]
num=int(input("Enter a number of elements:"))
for i in range(num):
    num1=int(input("Enter the number of elements:"))
    list.append(num1)
mul_of_list(list)
