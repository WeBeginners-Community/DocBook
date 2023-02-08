HEAP SORT

INTRODUCTION:

A comparison-based sorting method based on the Binary Heap data structure is called heap sort. By using the components of the given array, it creates the min-heap or max-heap, and processes the elements. The ordering of an array is known as a min-heap or max-heap, with the root member serving as the array's minimum or maximum element. The idea behind a heap sort is to take each element out of the list's heap section one at a time before adding them to the sorted section. It is an in-place sorting algorithm.

Heapify- The process of creating a heap data structure from a binary tree that is represented by an array is known as heapify. Min-Heap or Max-Heap is made with it.

WORKING:
There are two phases involved in the sorting of elements using heap sort. They are as follows:-
A heap is created in the first step by adjusting the array's elements.
After the heap has been created, the root element must now be repeatedly removed by shifting it to the end of the array, and the heap structure must then be stored with the other elements.
Now let’s understand heap sort with an example:-
81	89	9	11	14	76	54	22

![1](https://user-images.githubusercontent.com/101787864/211015177-a831a210-6190-4df5-a5b4-adcbcce5ddff.jpg)

From the above given array, lets construct a heap and convert it into max heap.
 

Now the given array becomes:
89	81	76	22	14	9	54	11
The next step is to delete the root element i.e. 89 from the max heap. For deletion, we have to swap 89 with last node i.e. 11. After deletion, again we have to perform heapify to convert it into max heap.
 ![2](https://user-images.githubusercontent.com/101787864/211015270-6d30a641-17ab-4cf0-9332-e74f7cc420d5.jpg)


Now the array becomes:
81	22	76	11	14	9	54	89
The next step is to delete the root element i.e. 81 from the max heap. For deletion, we have to swap 81 with last node i.e. 54. After deletion, again we have to perform heapify to convert it into max heap.
 ![3](https://user-images.githubusercontent.com/101787864/211015359-56b0e96a-0ba5-4c81-8626-29d532494db5.jpg)

Now the array becomes:
76	22	54	11	14	9	81	89
The next step is to delete the root element i.e. 76 from the max heap. For deletion, we have to swap 76 with last node i.e. 9. After deletion, again we have to perform heapify to convert it into max heap.
 ![4](https://user-images.githubusercontent.com/101787864/211015450-b162369f-80da-441f-a475-f550786adaa3.jpg)

Now the array becomes:
54	22	9	11	14	76	81	89
The next step is to delete the root element i.e. 54 from the max heap. For deletion, we have to swap 54 with last node i.e. 14. After deletion, again we have to perform heapify to convert it into max heap.
 ![5](https://user-images.githubusercontent.com/101787864/211015553-21a555b3-3f23-4488-b65d-37ae4fbb9dad.jpg)

Now the array becomes:
22	14	9	11	54	76	81	89
The next step is to delete the root element i.e. 22 from the max heap. For deletion, we have to swap 22 with last node i.e. 11. After deletion, again we have to perform heapify to convert it into max heap.
 ![6](https://user-images.githubusercontent.com/101787864/211015702-81ab9a2a-931e-4bb8-a794-edc1bc8f62eb.jpg)

Now the array becomes:
14	11	9	22	54	76	81	89
The next step is to delete the root element i.e. 14 from the max heap. For deletion, we have to swap 14 with last node i.e. 9. After deletion, again we have to perform heapify to convert it into max heap.
 ![7](https://user-images.githubusercontent.com/101787864/211015764-2fd42f2e-8621-478c-8eb4-b34b104fe567.jpg)

Now the array becomes:
11	9	14	22	54	76	81	89
The next step is to delete the root element i.e. 11 from the max heap. For deletion, we have to swap 11 with last node i.e. 9. After deletion, again we have to perform heapify to convert it into max heap.
 ![8](https://user-images.githubusercontent.com/101787864/211015925-f6954945-35fc-4177-8c7c-643c8fcd0988.jpg)

Now the array becomes:
9	11	14	22	54	76	81	89
Now, heap has only one element left. After deleting it, heap will be empty.
 ![9](https://user-images.githubusercontent.com/101787864/211015969-2039650b-1008-40b7-934d-50317e438b04.jpg)

Now the array becomes:
9	11	14	22	54	76	81	89

The array is completely sorted.

ALGORITHM:

HeapSort(arr)
BuildMaxHeap(arr)  
for i = length(arr) to 2  
    swap arr[1] with arr[i]  
        heap_size[arr] = heap_size[arr] ? 1  
        MaxHeapify(arr,1)  
End  

TIME COMPLEXITY:

For all three cases (best case, worst case and average case), the time complexity of heap sort is O (n log n).

ADVANTAGES:

Efficiency- Heap sort is an efficient sorting algorithm. The time required performing heap sort increases logarithmically whereas, other algorithm may increase exponentially as the number of item to sort increases.
 
 Memory Usage- Memory use is modest since it just requires the minimum amount of memory needed to store the initial list of things to be sorted.
 
 # C++ program for heap sort
 // C++ program for implementation of Heap Sort

#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{

	// Initialize largest as root
	int largest = i;

	// left = 2*i + 1
	int l = 2 * i + 1;

	// right = 2*i + 2
	int r = 2 * i + 2;

	// If left child is larger than root
	if (l < N && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest
	// so far
	if (r < N && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected
		// sub-tree
		heapify(arr, N, largest);
	}
}

// Main function to do heap sort
void heapSort(int arr[], int N)
{

	// Build heap (rearrange array)
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);

	// One by one extract an element
	// from heap
	for (int i = N - 1; i > 0; i--) {

		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}

// A utility function to print array of size n
void printArray(int arr[], int N)
{
	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver's code
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	heapSort(arr, N);

	cout << "Sorted array is \n";
	printArray(arr, N);
}

# Output

![heap](https://user-images.githubusercontent.com/71088263/212091157-1015b8d2-3df7-406e-b5ae-0dc82d939b28.png)
