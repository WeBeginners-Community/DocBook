# Binary Search Using Recursion
Binary search is an efficient algorithm for finding an element within a sorted array. It works by repeatedly dividing the search interval in half until the desired element is found or it is clear that the element is not present in the array. 

# Here is a C++ Program that implements Binary search Using Recursion:
```cp
#include <iostream>
using namespace std;

// Recursive function to perform binary search on a sorted array
int binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            return binarySearch(arr, mid + 1, right, x);
        else
            return binarySearch(arr, left, mid - 1, x);
    }
    return -1;  // element not found
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
    cout << "Element is not present in array";
    else
    cout << "Element is present at index " << result;
    return 0;
}
```

# Explanation Of the above program
This code first defines the binarySearch function, which takes an array arr, the left and right indices of the search interval, and the element x to be searched for as input. If the search interval is not empty, the function calculates the midpoint of the interval and compares the element at the midpoint with x. If the element at the midpoint is equal to x, the function returns the index of the midpoint. If x is smaller than the element at the midpoint, the function calls itself with the subarray to the right of the midpoint as the search interval. If x is larger, the function calls itself with the subarray to the left of the midpoint as the search interval. If the search interval becomes empty, the function returns -1 to indicate that x was not found in the array.

The main function then demonstrates how to use the binarySearch function by defining an array arr and searching for the element x = 10. It prints the result of the search to the console.

# Time complexity 
The time complexity of the binary search algorithm is O(log n), where n is the number of elements in the array. This is because the search interval is halved with each iteration of the loop or recursive call, so the number of iterations or recursive calls is at most O(log n).

# Space Complextiy
The space complexity of the algorithm is O(1), as it only requires a constant amount of memory to store the variables left, right, mid, and x, regardless of the size of the input array.

# Difference between the complexity of the normal aproach and recursive aproach
The time and space complexity of the above C++ program are the same as the binary search algorithm itself, as the program simply implements the algorithm and does not perform any additional operations that would affect the complexity. 





