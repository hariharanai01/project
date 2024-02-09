n=int(input("Enter a number"))
factorial = 1
if n<0:
    print("sorry. factorial does not exsits for negative number")
elif  n == 0:
    print("The factorial of 1 is")
else:
    for n in range(1,n+1):
        factorial = factorial*n
    print("The factorial of ",n,",is",factorial)