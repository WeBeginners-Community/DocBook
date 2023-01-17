BUCKET SORT

INTRODUCTION

Bucket sort is a sorting algorithm that separate the elements into multiple groups said to be buckets.Elements in bucket sort are first uniformly divided into groups
called buckets, and then they are sorted by any other sorting algorithm. After that, elements are gathered in a sorted manner.Finally, the sorted buckets are combined
to form a final sorted array.


The advantages of bucket sort are -


1)Bucket sort reduces the no. of comparisons.
2)It is asymptotically fast because of the uniform distribution of elements


The limitations of bucket sort are -

1)It may or may not be a stable sorting algorithm.
2)It is not useful if we have a large array because it increases the cost.
3)It is not an in-place sorting algorithm, because some extra space is required to sort the buckets.


Algorithm


Bucket Sort(A[])  
1.  Let B[0....n-1] be a new array  
2.  n=length[A]  
3.  for i=0 to n-1  
4.  make B[i] an empty list  
5.  for i=1 to n  
6.  do insert A[i] into list B[n a[i]]  
7.  for i=0 to n-1  
8.  do sort list B[i] with insertion-sort  
9.  Concatenate lists B[0], B[1], B[n-1] together in order  
End   

Working of Bucket Sort




