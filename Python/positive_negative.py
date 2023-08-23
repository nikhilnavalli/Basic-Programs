# Python program to check whether a number is positive or negative or zero.

num = int(input("Enter a number: "))

if num > 0:
   print('Entered number is a positive number.')
elif num == 0:
   print('Entered number is zero.')
else:
   print('Entered number is a negative number.')

# Printing the result using f string or string literals
# print(f'Entered number is a postive number') or print(f'{num} is a positive number')
