Representation of a polynomial can be done as a collection of terms and every term is having a coefficient and exponent. 

We can add two polynomials and generate a third polynomial. We have our 1st polynomial as :


![image1](https://dotnettutorials.net/wp-content/uploads/2022/02/word-image-149.png)

We will represent this polynomial data as,
![image5](https://dotnettutorials.net/wp-content/uploads/2022/02/word-image-150.png)

The 2nd polynomial is
![image2](https://dotnettutorials.net/wp-content/uploads/2022/02/word-image-151.png)


We can represent this as,
![image3](https://dotnettutorials.net/wp-content/uploads/2022/02/word-image-152.png)

In this way, we add two polynomials programmatically. The final value of ‘P3’ will be
![image4](https://dotnettutorials.net/wp-content/uploads/2022/02/word-image-157.png)

Algorithm for adding polynomials using a linked list

-Create a new linked list to store the resulting list.
-Iterate through both lists until one is empty.
-If a list is empty, insert the remaining node from another list into the resulting list.
-Otherwise compare the degrees of the two nodes a (first node in the list) and b (second node in the list). Three cases are possible here:
   -If degrees a and b are equal, a new node is inserted into the result list with a coefficient equal to the sum of coefficients a and b and of the same degree.
   -If degree a is greater than b, a new node is inserted in the resulting list with coefficient and degree equal to a.
   -If degree b is greater than a, a new node with coefficient and degree equal to b is inserted into the result list.


![images6](https://media.geeksforgeeks.org/wp-content/uploads/Addition-of-two-polynomial.png)

Time Complexity: O(m + n) where m and n are number of nodes in first and second lists respectively.