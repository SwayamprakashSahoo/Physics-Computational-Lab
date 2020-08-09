#program to print the factorial of a number
n = -1

while (n<0):
    x= input("Please enter a number:\n")
    try:
        n=int(x);
    except ValueError:
        print( "{input} invalid. Please enter a NUMBER.\n".format(input=x))

if n==0:
    print("The factorial of the number", n, "is 1\n")

else:
    p=n
    fac = 1
    while (n > 0):
        fac = fac * n
        n -= 1
    print("The factorial of the number",p, "is", fac ,"\n")
