'''
Author:Amala Manoj
Date:20-11-2024
'''
import random
numbers=list(range(1,11))
for number in numbers:
    print(number,end=" ")
numbers[4]=20
print(numbers)
random_number_from_the_numbers=random.choice(numbers)
print(random_number_from_the_numbers)
