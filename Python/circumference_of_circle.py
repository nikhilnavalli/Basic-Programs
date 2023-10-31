# Python program to calculate the circumference of a circle with the given radius.

radius = float(input("Enter the radius of circle : "))
PI = 3.14159265359
circumference = 2 * PI * radius

print("The circumference of circle with radius "+str(radius)+" is = "+str(circumference))

# We can also print the result using the f string or string literals as given below.
# print(f"The circumference of circle with radius {radius} is {circumference}")
