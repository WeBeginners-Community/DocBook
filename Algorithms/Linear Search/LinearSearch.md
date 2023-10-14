# Linear Search
A linear search, also known as a sequential search, is a way of finding an element inside a list in computer science. It checks each element of the list in turn until a match is discovered or the entire list has been searched.

Continues until the element or the list's end is reached.

## Let's know more!
1. Linear search is the most basic method of searching.
2. In the Linear search strategy, the element to be discovered is searched consecutively in the list.
3. This approach may be used on a sorted or unsorted list (usually arrays).
4. In the case of a sorted list, searching begins with the 0th element and continues until the element is discovered or the element with a value larger than (assuming the list is sorted in order of increasing/ascending order) the value being searched is reached.
5. In contrast, searching in an unsorted list starts at the 0th element and continues until the element or the end of the list is reached.
6. The linear search method iteratively searches all members of the array.
7. It has a best execution time of `1` and a worst execution time of `n`, where n is the total number of items in the search array.
8. It is the simplest basic search algorithm in data structure and verifies each item in the set of elements until it matches the search element till the end of data collection. A linear search method is recommended when data is unsorted.

#### Defination
Linear Search is a sequential search technique that begins at one end and proceeds through each element of a list until the target element is located; otherwise, the search continues until the data set is exhausted. It is the simplest search algorithm.

## Simple Illustration
<img src="https://user-images.githubusercontent.com/95307102/215497290-55bbdadf-3cbb-4718-b44b-44a96b713c6d.png">
<img src="https://user-images.githubusercontent.com/95307102/215497614-09a69cb3-c3ef-4006-ab4a-279425b51b6d.png">

## Linear Search Algorithm
1. Step 1: First, read the search element (Target element) in the array.
2. Step 2: In the second step compare the search element with the first element in the array.
3. Step 3: If both are matched, display “Target element is found” and terminate the Linear Search 
function.
4. Step 4: If both are not matched, compare the search element with the next element in the array.
5. Step 5: In this step, repeat steps 3 and 4 until the search (Target) element is compared with the 
last element of the array.
6. Step 6 – If the last element in the list does not match, the Linear Search Function will be 
terminated, and the message “Element is not found” will be displayed.

## Example

Given an array arr[] of N elements, the task is to write a function to search a given element x in arr[].

**Input**: arr[] = {10, 20, 80, 30, 60, 50,110, 100, 130, 170}, x = 110;

**Output**: 6

**Explanation**: Element x is present at index 6

#### Follow the below idea to solve the problem:

`Iterate from 0 to N-1 and compare the value of every index with x if they match return index`

Follow the given steps to solve the problem:

1. Set the first element of the array as the current element.
2. If the current element is the target element, return its index.
3. If the current element is not the target element and if there are more elements in the array, set the current element to the next element and repeat step 2.
4. If the current element is not the target element and there are no more elements in the array, return -1 to indicate that the element was not found.

## Time and Space Complexity

Linear search Complexity as given below:
##### Space Complexity
Space complexity for linear search is `O (n)` as it does not use any extra space where 
n is the number of elements in an array.

##### Time Complexity
1. `Best- case complexity = O (1)` occurs when the search element is present at the first 
element in the search array.
2. `Worst- case complexity = O (n)` occurs when the search element is not present in the 
set of elements or array.
3. `Average complexity = O (n)` is referred to when the element is present somewhere 
in the search array

**Time Complexity:** `O(N)`

**Auxiliary Space:** `O(N)`, for using recursive stack space. 

## Linear Search Recursive Approach:
 Follow the given steps to solve the problem:

`If the size of the array is zero then, return -1, representing that the element is not found. This can also be treated as the base condition of a recursion call.`

`Otherwise, check if the element at the current index in the array is equal to the key or not i.e, arr[size – 1] == key. If equal, then return the index of the found key.`

### Advantages of Linear Search:
1. Linear search is simple to implement and easy to understand.
2. Linear search can be used irrespective of whether the array is sorted or not. It can be used on arrays of any data type.
3. Does not require any additional memory.
4. It is a well suited algorithm for small datasets.

### Drawbacks of Linear Search:
1. Linear search has a time complexity of O(n), which in turn makes it slow for large datasets.
2. Not suitable for large array.
3. Linear search can be less efficient than other algorithms, such as hash tables.

### When to use Linear Search:
1. When we are dealing with a small dataset.
2. When you need to find an exact value.
3. When you are searching a dataset stored in contiguous memory.
4. When you want to implement a simple algorithm.


### Java Code for Linear Search
// search the target and return true or false
    `static boolean linearSearch3(int[] arr, int target) {
        if (arr.length == 0) {
            return false;
        }

        // run a for loop
        for (int element : arr) {
            if (element == target) {
                return true;
            }
        }
        // this line will execute if none of the return statements above have executed
        // hence the target not found
        return false;
    }`
// search in the array: return the index if item found
// otherwise if item not found return -1
    `static int linearSearch(int[] arr, int target) {
        if (arr.length == 0) {
            return -1;
        }

        // run a for loop
        for (int index = 0; index < arr.length; index++) {
            // check for element at every index if it is = target
            int element = arr[index];
            if (element == target) {
                return index;
            }
        }
        // this line will execute if none of the return statements above have executed
        // hence the target not found
        return -1;
    }`
 
    
    




