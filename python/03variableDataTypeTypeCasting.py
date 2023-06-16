# variable is a container in which we store data.

var = "hello world"   # creating and storing a variable (string variable)
var1 = 4  # python automatically assign type to variable  (integer variable)
var2 = 35.7  # (float variable)
var3 = " ayush"

print(var)  # printing a variable.
print(var1)  # printing a variable.
print(var2)  # printing a variable.

print(type(var))    # printing the type of variable.
print(type(var1))
print(type(var2))

print(var1+var2)   # this will automatically typecast.
# print(var+var2)   # this will give error as not able to add a string to a float.
print(var + var3)  # concatenating two string.

# explicit type casting

var4 = "32"
var5 = "36"

print(var4)
print(var5)
# this will concatenate them instead of adding them coz they are strings
print(var4+var5)
# explicity type casting... intepretar will type cast into integer and then add them.
print(int(var4)+int(var5))

"""
funciton to typecast
str()
int()
float()
"""

# if we want to print a string multiple times.

print("hello world\n")  # this will print a single time
print(10 * "hello world\n")  # this will print 10 times.

# this will add 100 to var4 after typecasting it to integer.
print(100 * int(var4)+int(var5))
# this will convert the output into string and print it 100 times.
print(10 * str(int(var4)+int(var5)))

# taking input from user

print("Enter a number")
# input() function takes input from the user and assign it to the variable as a string.
inpnum = input()
print("you entered number is: ", inpnum)

# print("you entered number is: ", inpnum+10) # this will give an error coz we cannot add a string and a integer variable.
# this will type cast the string into integer and then add it to another integer.
print("you entered number is: ", int(inpnum)+10)

print("Enter two number: ")
a = input()
b = input()
print("the sum is: ", int(a)+int(b))
