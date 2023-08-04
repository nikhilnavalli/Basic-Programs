# Python program for calculator, which performs basic arithmetic operations.

a = int(input('Enter first number : '))
b = int(input('Enter second number : '))
print('''*********CALCULATOR*********
        1.Addition
        2.Subtraction
        3.Multiplication
        4.Division
*****************************
''')

option = input('Please select your option : ')

if(option == '1'):
    print('Addition of '+str(a)+' and '+str(b)+' is : '+str(a+b))
elif(option == '2'):
    print('Subtraction of '+str(a)+' and '+str(b)+' is : '+str(a-b))
elif(option == '3'):
    print('Multiplication of '+str(a)+' and '+str(b)+' is : '+str(a*b))
elif(option == '4'):
    print('Division of '+str(a)+' and '+str(b)+' is : '+str(a/b))
else:
    print('Invalid option!! Please select a valid option')


# Printing the result using f string or string literal(anothe way of printing the result)
# NOTE : print(f'Addition of {a} and {b} is : {a+b}')