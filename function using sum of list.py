'''
Author:Amala Manoj
Date:30-11-2024
'''
def sum_of_list(list):
    sum=0
    for i in list:
        sum=sum+i
    print(sum)
list=[]
num=int(input("Enter a number of elements:"))
for i in range(num):
    num1=int(input("Enter the element:"))
    list.append(num1)
sum_of_list(list)
