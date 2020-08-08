#Program to add n numbers(based on input)

n=int(input("Please enter a number: "))
x = n
if n < 0:
    print("Please enter a positive number.")

else:
    sum = 0
    while (n > 0):
        sum += n
        n -= 1
    print("The sum of numbers from 1 to ",x, " is", sum)
