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


1) Suppose, the input array is:

![image](https://user-images.githubusercontent.com/59620280/212933762-e3935224-626a-44b9-b0d9-79b35e23e4c9.png)

Create an array of size 10. Each slot of this array is used as a bucket for storing elements.

![image](https://user-images.githubusercontent.com/59620280/212933936-f0ef8e8b-9ae4-4e39-bf34-2e196e8a46fd.png)

2)Insert elements into the buckets from the array. The elements are inserted according to the range of the bucket.

In this example code, we have buckets each of ranges from 0 to 1, 1 to 2, 2 to 3,...... (n-1) to n.

![image](https://user-images.githubusercontent.com/59620280/212934159-373e0d60-0521-43b2-951e-2e39247202e3.png)

Similarly, .25 is also inserted into the same bucket. Everytime, the floor value of the floating point number is taken.
If we take integer numbers as input, we have to divide it by the interval (10 here) to get the floor value.
Similarly, other elements are inserted into their respective buckets.

![image](https://user-images.githubusercontent.com/59620280/212936218-2537c63e-7577-4147-9c6a-bafce0a51315.png)

3)The elements of each bucket are sorted using any of the stable sorting algorithms. Here, we have used quicksort.

![image](https://user-images.githubusercontent.com/59620280/212936334-dfd8e8f6-2c48-4f3e-86b9-069088454605.png)

4)The elements from each bucket are gathered.
It is done by iterating through the bucket and inserting an individual element into the original array in each cycle. The element from the bucket is erased once it is copied into the original array.

![image](https://user-images.githubusercontent.com/59620280/212936460-dda513e9-411c-47b5-9526-3755fd8b70fe.png)


Bucket Sort Code in Python


def bucketSort(array):
    bucket = []
    # Create empty buckets
    for i in range(len(array)):
        bucket.append([])
    # Insert elements into their respective buckets
    for j in array:
        index_b = int(10 * j)
        bucket[index_b].append(j)
    # Sort the elements of each bucket
    for i in range(len(array)):
        bucket[i] = sorted(bucket[i])
    # Get the sorted elements
    k = 0
    for i in range(len(array)):
        for j in range(len(bucket[i])):
            array[k] = bucket[i][j]
            k += 1
    return array

array = [.42, .32, .33, .52, .37, .47, .51]
print("Sorted Array in descending order is")
print(bucketSort(array))


Bucket Sort Complexity

Worst Case Complexity: O(n2)

When there are elements of close range in the array, they are likely to be placed in the same bucket. This may result in some buckets having more number of elements than others.
It makes the complexity depend on the sorting algorithm used to sort the elements of the bucket.
The complexity becomes even worse when the elements are in reverse order. If insertion sort is used to sort elements of the bucket, then the time complexity becomes O(n2).

Best Case Complexity: O(n+k)

It occurs when the elements are uniformly distributed in the buckets with a nearly equal number of elements in each bucket.
The complexity becomes even better if the elements inside the buckets are already sorted.
If insertion sort is used to sort elements of a bucket then the overall complexity in the best case will be linear ie. O(n+k). O(n) is the complexity for making the buckets and O(k) is the complexity for sorting the elements of the bucket using algorithms having linear time complexity at the best case.

Average Case Complexity: O(n)

It occurs when the elements are distributed randomly in the array. Even if the elements are not distributed uniformly, bucket sort runs in linear time. It holds true until the sum of the squares of the bucket sizes is linear in the total number of elements.

Bucket Sort Applications

Bucket sort is used when:

1)Input is uniformly distributed over a range.
2)There are floating point values





