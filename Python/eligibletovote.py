# Python program to check whether the person is eligible for voting or not.

age = int(input('Enter your age : '))

if(age <= 18):
    print("Sorry! You are not eligible for voting")
elif(age > 18 and age < 120):
    print('You are eligible for voting')
elif(age >= 120):
    print('Age is invalid. Please enter a valid age')