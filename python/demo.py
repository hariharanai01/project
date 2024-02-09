a=int(input("Enter the Value:"))
b=input("Choose square or cube:")
if "square" in b:
    c=a*a;
    print("The square Value of  is:",c)
elif "cube" in b:
    c=a*a*a;
    print("The cube Value of is:",c)
else:
    print("Please choose the correct option.")
 