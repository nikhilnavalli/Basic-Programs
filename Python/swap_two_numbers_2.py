# Python program to swap two numbers. (Using a third variable)

a = int(input("Enter first number : "))
b = int(input("Enter second number : "))
print("Before swapping the values a = "+str(a)+" b = "+str(b))
temp = a
a = b
b = temp
print("After swapping the values a = "+str(a)+" b = "+str(b))
