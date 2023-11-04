# Python program to check whether the entered number is odd or even.

number = int(input("Enter a number : "))

if(number%2 == 0):
  print(str(number)+" is an even number")
else:
  print(str(number)+" is an odd number")

# We can also print the result using f string or string literals as given below.
# print(f"{number} is an odd / even number")
