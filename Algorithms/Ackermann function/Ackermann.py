def ackermann(m,n):
  if (m==0):
    return (n+1)
  elif (m>0 and n==0):
    return ackermann(m-1,1)
  elif (m>0 and n>0):
    return ackermann(m-1,ackermann(m,n-1))


print("\t\t\tACKERMANN FUNCTION\t\t\t\n")
num1=int(input("Enter value of m :"))
num2=int(input("Enter value of n :"))
value=ackermann(num1,num2)
print("The value of Ackermann function is ",value)
