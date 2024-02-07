import example

a=example.GmpClass()
a.Multiply()
a.Print()

mystring="This is a test"
a.setString(mystring);

b=a.getString()
c=a.getString()
d=a.getString()

# The following creates a memory leak 
#e=a.getCopyString()
f=a.safeCopyString()
print( "Here is a safe copy of %s:" % f )


# Reassign f and see if memory kealk occurs
#f="Testing if memory leak"


