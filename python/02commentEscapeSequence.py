# In this program we will see how to write comments in python and about escape sequences in python.
""" 
'#' is used to write a single line comment in python  
and triple quotes (as shown) is used to write multile comments. 
"""

print("New to python programming")
print("This is new line")   # print automatically adds new line.

# if we don't want any new line, we need to add 'end' in print

# here it will not add anything after this line ends hence new line will begin in continuation.
print("New to python Programming", end="")
print("this is new line")

# here it will add , before new line.
print("New to python Programming", end=",")
print("this is new line")

# here it will add " whatever we write between quotes " before new line.
print("New to python Programming", end=" jocker ")
print("this is new line")

# we can also write multiple print in same print statements

# writning multiple print in one print statements. here it will automatically add a space in between the statements.
print("New to python programming", "this is new line")

# if we want to escape an escape sequence( \n, ', " ) we need to add '\' before the sequence.
print("\\n")  # here we are printing \n on terminal.
print("\"")  # here we are printing " on the terminal.
