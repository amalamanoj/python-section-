'''
Author:Amala Manoj
Date:28-10-2024
Description:Write a program that simulates a simple bank ATM system. The user has an initial balance of $1000. The ATM should display a menu with options to:
'''balance_amount=1000
while True:
    print("\n1.\tCheck Balance")
    print("2.\tDeposit Money")
    print("3.\tWithdraw Money")
    print("4.\tExit")
    choice=int(input("Enter your choice:"))
    if choice==1:
        print(f"The current balance ${balance_amount}")
    elif choice==2:
        deposit_amount=float(input("Enter the amount"))
        balance_amount+=deposit_amount
        print(f"The deposited amount ${deposit_amount} and the current balance ${balance_amount}")
    elif choice==3:
        withdraw_amount=float(input("Enter the amount withdraw"))
        if withdraw_amount>balance_amount:
            print("Insufficient Balance")
        else:
            balance_amount=balance_amount-withdraw_amount
            print(f"The amount withdraw from the account ${withdraw_amount} and the balance_amount ${balance_amount}")
    elif choice==4:
        break
    else:
        print("Invalid Entry")



