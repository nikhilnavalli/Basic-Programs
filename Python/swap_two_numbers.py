# Python program to swap two numbers without using a third variable.

a=int(input("Enter first number : "))
b=int(input("Enter second number : "))

print("Before swapping values : a = "+str(a)+" and b = "+str(b))
a=a+b
b=a-b
a=a-b
print("After swapping values : a = "+str(a)+" and b = "+str(b))

# We can also print using f string or string literals in line number 6 and 10 respectively as given below
# print(f"Before swapping values : a = {a} and b = {b}")
# print(f"After swapping values : a = {a} and b = {b}")
