'''n=int(input("Enter the number = "))
tag=0
if n==1:
    print("This is not prime number =" ,n)
if n>1:
    for i in range(2,n):
        if(n%i)==0:
            tag=False
            print("This is not prime number =" ,n)
            break
        else:
            print("This is prime number =" ,n)
            break'''    





def hari():
    a=1+2
    print(a)
    y=input("Enter the value").split(" ")
    print(y)
    a=a+1
    if a==3:
        print("a is 3")
        x="Diamond is a costly jewllery"
        for x1 in x:
            print(x1)
        x=x.split(" ")
        for x2 in x:
            print(x2)
    elif a>3:
        print("dimond is not costly")
hari()
