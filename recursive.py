def is_valid_mobile_number(number):
    if len(number)==10 and number[0] in ["9","8","7"]:
        print("It is a valid number")
    else:
        print("It is a invalid number")
number=str(input("Enter the number:"))
is_valid_mobile_number(number)
