# Inserion Sort
The below program demonstrated Insertion Sort
```c
#include <iostream>
#include <stdio>
void insertion_sort_recursive(int arr[], int n) {
    if (n <= 1) 
        return;
    insertion_sort_recursive(arr, n-1);
    int last = arr[n-1];
    int j = n-2;
    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertion_sort_recursive(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
         cout << arr[i] << " ";
    cout << endl;

    return 0;
}
```
# Explanation

The function insertion_sort_recursive(int arr[], int n) takes in an array of integers arr and the number of elements in the array n as parameters.

The first thing the function does is check if the number of elements in the array is less than or equal to 1. If it is, the function returns without doing anything because a single element is already considered sorted. This is the base case of the recursion.

If the number of elements is greater than 1, the function makes a recursive call to itself, passing in the same array and the number of elements minus 1. This recursive call will sort the first n-1 elements of the array.

Once the recursive call returns, the function proceeds to insert the last element of the array (which is arr[n-1]) in its correct position in the sorted sub-array. It does this by first storing the last element in a variable last and then initializing a variable j to n-2.

The function then enters a while loop that continues until j is less than 0 or the element at index j is no longer greater than last. In each iteration of the loop, the function moves the element at index j one position to the right (arr[j+1] = arr[j]) and decrements j by 1. This makes room for last to be inserted in its correct position.

Once the while loop is done, the function inserts last in the position j+1 (arr[j+1] = last) and the last element is now in its correct position and the array is sorted.

It's important to note that this particular implementation of the insertion sort algorithm is less efficient than a non-recursive implementation, because it uses recursion to sort the array, which increases the call stack and memory usage. However, this example is useful to illustrate the idea of how recursion can be used to implement sorting algorithms.

