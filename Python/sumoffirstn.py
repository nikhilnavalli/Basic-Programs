# Python program to calculate sum of first N natural numbers.

n = int(input('Enter the number : '))
sum = 0

for i in range(1, n+1):
    # print(str(i))
    sum = sum + i

print('Sum of first '+str(n)+' natural numbers is = '+str(sum))

# Another way of printing the result using f string or string literals
# print(f'Sum of first {n} natural numbers is = {sum}')