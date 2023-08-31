# Python program to generate random number between given range.

import random

start = int(input('Enter the initial range : '))
end = int(input('Enter the final range : '))


print('The generated random number is : '+random.randint(start,end))
