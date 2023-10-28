# Python program to swap two numbers. (Using a third variable)

a = int(input("Enter first number : "))
b = int(input("Enter second number : "))
print("Before swapping the values a = "+str(a)+" b = "+str(b))
temp = a
a = b
b = temp
print("After swapping the values a = "+str(a)+" b = "+str(b))

# We can also print the results using the f string or string literals in the line number 5 and 9 respectively as given below.
# print(f"Before swapping the values a = {a} and b = {b}")
# print(f"After swapping the values a = {a} and b = {b}")
