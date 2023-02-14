A sparse matrix is a special type of a matrix in which the number of zero elements is much higher than the number of non-zero elements present in the matrix.

Example:

0 0 3 0 4
0 0 5 7 0
0 0 0 0 0
0 2 6 0 0

The above example is a sparse matrix with more than (2/3)of the total elements as zero in the matrix.

It contains lesser non-zero elements than zeros and thus lesser memory can be used to store only those elements.Computing time can be saved by logically designing a data structure traversing only non-zero elements.

Sparse matrices are used instead of simple matrices because they have a significantly smaller memory footprint and computational complexity. This is because sparse matrices only store the non-zero elements and have a special data structure that can efficiently traverse and perform operations on only the non-zero elements, while skipping over the zeros. 
This can result in faster computations and reduced memory usage, which is particularly important for large matrices with many zeros.


Sparse matrix representations can be done in mainly two common representations: 
1.Array representation
2.Linked list representation

Using Arrays:
Row: Index of row, where non-zero element is located
Column: Index of column, where non-zero element is located
Value: Value of the non zero element located at index – (row, column)

![image1](http://btechsmartclass.com/DS/images/U1_T14_P1.png)

Condition to check whether it is a sparse matrix or not is ::total number of zero elements in the matrix is greater than (rows * columns)/2::.

Using Linked List:
In this representation, each column of a sparse matrix is represented as a circularly linked list .
Similar, representation is used for each row of the sparse matrix.

Each node has 3 additional fields- down, right & next.
* down field to link into a column list.
* right field to link into a row list.
* next field links the header nodes together.

Each element entry node has 3 fields in addition to the tag field:- row, col, down, right value.
* down field to link to next non-zero term in the same column.
* right field to link to next non-zero term in the same row.

![image2](https://images.slideplayer.com/34/8265303/slides/slide_34.jpg)

Applications of sparse matrix:
* Computer vision uses sparse matrices and network data structures when working with pictures that contain sections with dark pixels. 
* Sparse matrix data structures are also used in social graphs and map layouts.
* Extensive big sparse matrices are commonly used in machine learning and natural language parsing.
* Machine Learning - Again, almost every learning method relies heavily on Sparse matrices operations.
* Information Retrieval - An index is nothing but an intelligently crafted Sparse Matrix.
