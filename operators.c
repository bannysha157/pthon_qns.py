def fun(n1,n2,op):
    if op == "+":
        return (n1 + n2)
    elif op == "-":
        return (n1 - n2)
    elif op == "*":
        return (n1 * n2)
    elif op in ("/","%"):
        if op == "/" and n2!=0:
            return (n1 / n2)
        elif op =="%" and n2!=0:
            return (n1 % n2)
        else:
            return "Zero Division Exception"
    else:
         return "Invalid Operator"

while True:
    n1=int(input("\nEnter a number"))
    n2=int(input("\n Enter 2nd number"))
    op=input("\n select +,-,*,/ and % operators")
    result=fun(n1,n2,op)
    if result !="Zero Division Exception":
        print (result)
    else:
        print("Zero Division Exception")
    print("\n Do you want to continue(y/n)")
    choice=input("\n Enter your choice (y/n)")
    if choice in ("n","N"):
        break
