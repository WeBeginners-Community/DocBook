To find the value , every recursive function must have atleast two cases:
->base criteria
->recursive function

Ackermann function is a classic example of recursive function because it is not a primitive recursive function.It grows very quickly in value and so does the size of its call tree.

Ackermann function is a function which takes two values which are two non-negative integers to compute the result.Its arguments are never negative and always terminate.

![image1](https://media.geeksforgeeks.org/wp-content/uploads/20200219173155/Capture551.png)

Assume function used in the program be ackermann(int m,int n)
The logic used to compute the value of function is:
-if m=0, then return value (n+1)
-if m=0 and n>0 , then use recursive function to find the value of ackermann(m-1,1)
-if m>0 and n>0, then use recursive call to function ackermann(m-1,(ackermann(m,n-1)))

Taking an example A(1,2) where m=1,n=2

A(1,2)=A(0,A(1,1))
      =A(0,A(0,A(1,0)))
      =A(0,A(0,A(0,1)))
      =A(0,A(0,2))
      =A(0,3)
      =4
[!](https://i.stack.imgur.com/y3Umy.png)

-The time complexity of this algorithm is: O(mA(m, n)) to compute A(m, n) 
-The space complexity of this algorithm is: O(m) to compute A(m, n) 