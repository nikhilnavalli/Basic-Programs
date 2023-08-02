# Python program to calculate factorial of the entered number.

n = int(input('Enter a number : '))
fact = 1

if(n<0):
    print('Enter a non-negative number')
elif( n==0 or n==1):
    print('Factorial of '+str(n)+' is : '+ str(1))
else:
    for i in range(1, n+1):
        fact = fact * i
    print('Factorial of '+str(n)+' is : '+str(fact))


# Printing result using f string or string literal
# print(f'Factorial of {n} is : {fact}')
