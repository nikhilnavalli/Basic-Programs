# Python program to check whether the person is eligible for voting or not.

age = int(input('Enter your age : '))

if(age <= 18):
    print("Sorry! You are not eligible for voting")
    # print(f'Your age is {age} and you are not eligible for voting')
elif(age > 18 and age < 120):
    print('You are eligible for voting')
    # print(f'Your age is {age} and you are eligible for voting')
elif(age >= 120):
    print('Age is invalid. Please enter a valid age')
    # print(f'You entered {age} age and it is an invalid age')

# Another way of printing the result using the string literals or the f string
