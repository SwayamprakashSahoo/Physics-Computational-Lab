#program to sum the series 1 + 1/2 + 1/3 + ... till the sum doesn't change by more than .001
denominator = 1
sum = 0
count=0
print("The terms in the series include:")
num = float(1/denominator)
while num>0.001:
    num = 1 / denominator
    print("1/",(count+1))
    sum += num
    denominator += 1
    count+=1
print('The number of terms is:',count)
print('The sum of the above series is:',sum)
