The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. 

## The algorithm maintains two subarrays in a unsorted given array:

The subarray which already sorted. 

The remaining subarray was unsorted.

In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the beginning of unsorted subarray. 
After every iteration sorted subarray size increase by one and unsorted subarray size decrease by one.
After N (size of array) iteration we will get sorted array.

## Pseudocode:
 SELECTION SORT(arr, n)  
  
Step 1: Repeat Steps 2 and 3 for i = 0 to n-1  
Step 2: CALL SMALLEST(arr, i, n, pos)  
Step 3: SWAP arr[i] with arr[pos]  
[END OF LOOP]  
Step 4: EXIT  
  
SMALLEST (arr, i, n, pos)  
Step 1: [INITIALIZE] SET SMALL = arr[i]  
Step 2: [INITIALIZE] SET pos = i  
Step 3: Repeat for j = i+1 to n  
if (SMALL > arr[j])  
     SET SMALL = arr[j]  
SET pos = j  
[END OF if]  
[END OF LOOP]  
Step 4: RETURN pos 
## Explanation of Selection Sort using an example:
To understand the working of the Selection sort algorithm, let's take an unsorted array. It will be easier to understand the Selection sort via an example.

Let the elements of array are -

![image](https://user-images.githubusercontent.com/103322378/212599616-55183eea-6f65-4e75-a819-1a3d33bcd0b2.png)

Now, for the first position in the sorted array, the entire array is to be scanned sequentially.

At present, 12 is stored at the first position, after searching the entire array, it is found that 8 is the smallest value.

![image](https://user-images.githubusercontent.com/103322378/212600246-3027b751-8eb8-43f3-866e-d9e2b6e010ad.png)


So, swap 12 with 8. After the first iteration, 8 will appear at the first position in the sorted array.

![image](https://user-images.githubusercontent.com/103322378/212599728-a1c9d731-129c-4e28-98c9-f99478e194da.png)

For the second position, where 29 is stored presently, we again sequentially scan the rest of the items of unsorted array. After scanning, we find that 12 is the second lowest element in the array that should be appeared at second position.

![image](https://user-images.githubusercontent.com/103322378/212600409-a47d20ad-d9b3-42ca-9bd9-5d2c50d07d84.png)

Now, swap 29 with 12. After the second iteration, 12 will appear at the second position in the sorted array. So, after two iterations, the two smallest values are placed at the beginning in a sorted way.

![image](https://user-images.githubusercontent.com/103322378/212600448-d0df0ca8-ae12-4a52-b3e2-d8444c78fd66.png)

The same process is applied to the rest of the array elements. Now, we are showing a pictorial representation of the entire sorting process.

![image](https://user-images.githubusercontent.com/103322378/212600465-8d316f8a-eded-489e-8ace-295197c7eccf.png)


Now, the array is completely sorted.

## Implementation of Selection Sort in Python:

A = [64, 25, 12, 22, 11]

for i in range(len(A)):
	
	min_idx = i
	for j in range(i+1, len(A)):
		if A[min_idx] > A[j]:
			min_idx = j
			
	A[i], A[min_idx] = A[min_idx], A[i]

print ("Sorted array")

for i in range(len(A)):

	print("%d" %A[i],end=" ")
 
 ##  Implementation of Selection Sort in JAVA:
public class SelectionSort
{

	void sort(int arr[])
	{
  
		int n = arr.length;

		for (int i = 0; i < n-1; i++)
		{
			
			int min_idx = i;
			for (int j = i+1; j < n; j++)
				if (arr[j] < arr[min_idx])
					min_idx = j;
          
			int temp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp;
		}
	}
  
	void printArray(int arr[])
	{
		int n = arr.length;
		for (int i=0; i<n; ++i)
			System.out.print(arr[i]+" ");
		System.out.println();
	}
	public static void main(String args[])
	{
		SelectionSort ob = new SelectionSort();
		int arr[] = {64,25,12,22,11};
		ob.sort(arr);
		System.out.println("Sorted array");
		ob.printArray(arr);
	}
}

# Time Complexities:

## Worst Case Complexity:  O(n2)
If we want to sort in ascending order and the array is in descending order then, the worst case occurs.
## Best Case Complexity: O(n2)
It occurs when the array is already sorted
## Average Case Complexity: O(n2)
It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

# Space Complexity: O(1)

It occurs because an extra variable temp is used.

# Selection Sort Applications
1. The selection sort is used when a small list is to need be sorted
2. Cost of swapping does not matter in selection sort.
3. Checking of all the elements is compulsory in  selection sort.
 
