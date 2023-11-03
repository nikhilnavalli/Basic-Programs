# Python program to print multiplication table of the entered number. 

n = int(input('Enter the number of which you want to print the table : '))

print('Multiplication table of '+str(n)+ ' : ')
for i in range(1, 11):
    print(str(n)+' * '+str(i)+' = '+str(n*i))
    # print(f'{n} * {i} = {n*i}')

# Another way of printing the result using f string or string literals
# print(f'{n} * {i} = {n*i}')
