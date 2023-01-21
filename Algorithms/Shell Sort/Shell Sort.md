Shell sort is the generalization of insertion sort, which overcomes the drawbacks of insertion sort by comparing elements separated by a gap of several positions.
In insertion sort, we move elements only one position ahead. When an element has to be moved far ahead, many movements are involved. The idea of ShellSort is to allow the exchange of far items. In Shell sort, we make the array h-sorted for a large value of h. We keep reducing the value of h until it becomes 1.
An array is said to be h-sorted if all sublists of every h’th element are sorted.
## Algorithm:
ShellSort(a, n) // 'a' is the given array, 'n' is the size of array  
for (interval = n/2; interval > 0; interval /= 2)  
for ( i = interval; i < n; i += 1)  
temp = a[i];  
for (j = i; j >= interval && a[j - interval] > temp; j -= interval)  
a[j] = a[j - interval];   
a[j] = temp;  
End ShellSort  
## Pseudocode :
![image](https://user-images.githubusercontent.com/103322378/213719290-0b40350e-bd6f-427f-8be3-4e8ed0d38c10.png)

## Working of Shell Sort:
Let the elements of array are -

![image](https://user-images.githubusercontent.com/103322378/213720448-e0a51eaa-15fe-4f11-b923-f33158730d35.png)

We will use the original sequence of shell sort, i.e., N/2, N/4,....,1 as the intervals.

In the first loop, n is equal to 8 (size of the array), so the elements are lying at the interval of 4 (n/2 = 4). Elements will be compared and swapped if they are not in order.

Here, in the first loop, the element at the 0th position will be compared with the element at 4th position. If the 0th element is greater, it will be swapped with the element at 4th position.
Otherwise, it remains the same. This process will continue for the remaining elements.

At the interval of 4, the sublists are {33, 12}, {31, 17}, {40, 25}, {8, 42}.

![image](https://user-images.githubusercontent.com/103322378/213721055-1a045a1f-c409-4df8-953d-531b037e69d8.png)

Now, we have to compare the values in every sub-list. After comparing, we have to swap them if required in the original array. After comparing and swapping, the updated array will look as follows
![image](https://user-images.githubusercontent.com/103322378/213722282-c9694c68-dcce-42cd-b641-4cb420863a66.png)

In the second loop, elements are lying at the interval of 2 (n/4 = 2), where n = 8.

Now, we are taking the interval of 2 to sort the rest of the array. With an interval of 2, two sublists will be generated - {12, 25, 33, 40}, and {17, 8, 31, 42}.

![image](https://user-images.githubusercontent.com/103322378/213722356-6389bae4-cca2-4620-9666-07d0b91e820b.png)

Now, we again have to compare the values in every sub-list. After comparing, we have to swap them if required in the original array. After comparing and swapping, the updated array will look as follows -

![image](https://user-images.githubusercontent.com/103322378/213722438-6025c6e7-ebcf-4d02-8eb1-ad535940ffe5.png)

In the third loop, elements are lying at the interval of 1 (n/8 = 1), where n = 8. At last, we use the interval of value 1 to sort the rest of the array elements. In this step, shell sort uses insertion sort to sort the array elements.

![image](https://user-images.githubusercontent.com/103322378/213722592-71b36cc3-d4db-466d-8dca-c9b3c79cea2a.png)
Now, the array is sorted in ascending order.

## Implementation of ShellSort in Python:

![image](https://user-images.githubusercontent.com/103322378/213725339-d8cece5a-ba05-4eed-8ebc-b443f290aed0.png)

##  Time Complexity:
# Best Case Complexity - 
It occurs when there is no sorting required, i.e., the array is already sorted. The best-case time complexity of Shell sort is O(n*logn).
# Average Case Complexity -
It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of Shell sort is O(n*logn).
# Worst Case Complexity - 
It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of Shell sort is O(n2).

## Space Complexity:
The space complexity of Shell sort is O(1).
