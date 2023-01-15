Radix sort is the linear sorting algorithm that is used for integers.In Radix sort, there is digit by digit sorting is performed that is started from the least significant digit to the most significant digit.

The process of radix sort works similar to the sorting of students names in their class, according to the alphabetical order. In this case, there are 26 radix formed due to the 26 alphabets in English.
In the first pass, the names of students are grouped according to the ascending order of the first letter of their names. After that, in the second pass, their names are grouped according to the ascending order of the second letter of their name. And the process continues until we find the sorted list.

## Steps Followed:
There are two steps operations followed in the algorithm:
1. First, we have to find the largest element (Suppose max) from the given array. Suppose ‘x’ be the number of digits in max. The ‘x’ is calculated because we need to go through the significant places of all elements. 
2. After that, go through one by one each significant place. Here, we have to use any stable sorting algorithm to sort the digits if each significant place.
## Working of radix sort:
Pass 0:
Suppose we have an unsorted array [181,289,390,121,145,736,514,212].
 
In the given array, the largest element is 736 that have 3 digits in it. So, three passes required to sort the array.


![image](https://user-images.githubusercontent.com/103322378/212550225-a101bd93-a23d-42f2-a4e3-effbe0f694a2.png)


Pass 1:
Now, first sort the elements on the basis of unit place digits (i.e., x = 0). Here, we are using the counting sort algorithm to sort the elements. So, in the first pass, the list is sorted on the basis of the digits at 0's place.
![image](https://user-images.githubusercontent.com/103322378/212550307-1634d34d-9475-4866-baf5-e978f40f3de8.png)

After the first pass, the array elements are – 
 ![image](https://user-images.githubusercontent.com/103322378/212550258-15ab718f-b7c9-4e76-8d48-dfd320186861.png)

Pass 2:
In this pass, the list is sorted on the basis of the next significant digits (i.e., digits at 10th place).
 ![image](https://user-images.githubusercontent.com/103322378/212550364-c1d90bbf-4e24-4879-942e-86986e731239.png)
 
After the second pass, the array elements are -
 ![image](https://user-images.githubusercontent.com/103322378/212550379-ac6f6bb2-9c64-41d3-b645-9727a4019087.png)

Pass 3:
In this pass, the list is sorted on the basis of the next significant digits (i.e., digits at 100th place).
 ![image](https://user-images.githubusercontent.com/103322378/212550397-47bbb92a-d7f3-40ca-b4b0-c219de90bd82.png)

After the third pass, the array elements are -
 ![image](https://user-images.githubusercontent.com/103322378/212550405-ab33baa3-9229-422e-ad87-89c1342352e2.png)

Now, the array is sorted in ascending order.
## Pseudo Code:
Begin

   define 10 lists as pocket
   
   for i := 0 to max -1 do 
   
      m = 10^i+1
      p := 10^i
      for j := 0 to n-1 do
         temp := array[j] mod m
         index := temp / p
         pocket[index].append(array[j])
      done

      count := 0
      for j := 0 to radix do
         while pocket[j] is not empty
            array[count] := get first node of pocket[j] and delete it
            count := count +1
      done
   done
End

# Implementation of Radix Sort in Python:
def countingSort(arr, exp1):

	n = len(arr)
	output = [0] * (n)

	
	count = [0] * (10)

	for i in range(0, n):
		index = arr[i] // exp1
		count[index % 10] += 1


	for i in range(1, 10):
		count[i] += count[i - 1]

	i = n - 1
	while i >= 0:
		index = arr[i] // exp1
		output[count[index % 10] - 1] = arr[i]
		count[index % 10] -= 1
		i -= 1
	i = 0
	for i in range(0, len(arr)):
		arr[i] = output[i]
    
def radixSort(arr):

	max1 = max(arr)

	exp = 1
	while max1 / exp >= 1:
		countingSort(arr, exp)
		exp *= 10

arr = [170, 45, 75, 90, 802, 24, 2, 66]

radixSort(arr)
for i in range(len(arr)):

	print(arr[i],end=" ")
 ## Time Complexity: 
In Best case time complexity of radix sort is Ω(n+k). Best case of time complexity occurs when there is no sorting required, that’s means the array is already sorted.

In Average Case time complexity of radix sort is  θ(nk). Average case of time complexity occurs when the array elements are in jumbled order that is not properly ascending and not properly descending.

In Worst Case time complexity of radix sort is O(nk). Worst case of time complexity occurs when the array elements are required to be sorted in reverse order.

## Space Complexity: 
The Space Complexity of radix sort is O(n+k).
# Advantages of the radix sort algorithm
1.	The radix sort performs better and faster than the quick sort.
2.	The radix sort is a stable sort to classify the numbers.
3.	The radix sorts maintain equal values.
4.	The radix sort is provided an easy and simple algorithm.

# Disadvantages of the radix sort algorithm
1.	The radix sort contains a large space for sorting the numbers.
2.	The radix sort does not apply to all data types’ values. You apply only integral values.
3.	The radix sort algorithm does not provide better efficiency and also does not use for tightly clustered values.

