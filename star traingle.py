'''
Author:Amala Manoj
Date:22-11-2024
'''
n=int(input("Enter a num:"))
for i in range(1,n+1):
    for j in range(1,i):
        print("*",end=" ")
    print("*")



n1=int(input("Enter a num:"))
for i in range(n1):
    for j in range(n-i-1):
        print("*",end=" ")
    print("*")


row3=int(input("Enter the no of rows:"))
for i in range(row3):
    for m in range(i,row3+1):
        print(" ", end=" ")
    for m in range(2*i-1):
        print("*", end=" ")
    print("")

row4=int(input("Enter the no of rows:"))
for i in range(row4,0,-1):
    for m in range(row4-i,0,-1):
        print(" ", end=" ")
    for m in range(2*i-1):
        print("*", end=" ")
    print("")




