'''
Author:Amala Manoj
Date:6-12-2024
'''
print("Welcome to the stick game.")
print("Description:The player to stick the last stick loss the game.")
print("Rules:")
print("This is a two player game.\n16 sticks are on the game.")
print("Each player can stick one set of sticks during his/her turn.")
print("A set contains 1,2 or 3 sticks")
remaining_sticks=16
player1=input("Enter the name of the player1:")
player2=input("Enter the name of the player2:")
num=1
while True:
    turn=player1 if num%2!=0 else player2
    print(f"Remaining sticks:{remaining_sticks}")
    number_of_sticks_in_the_set=int(input(f"{turn},pick a set of 1,2 or 3 sticks:"))
    if (remaining_sticks-number_of_sticks_in_the_set)<0:
        print("\nInsufficeint sticks.please try again.")
        continue
    elif (remaining_sticks==number_of_sticks_in_the_set):
        print(f"\n{turn} lost the game")
        break
    else:
        remaining_sticks-=number_of_sticks_in_the_set
    num+=1
