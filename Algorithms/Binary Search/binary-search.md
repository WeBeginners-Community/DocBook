
# Binary Search

Binary Search is a searching algorithm for finding an element's position in a sorted array.

In this approach, the element is always searched in the middle of a portion of an array.

## Binary Search Algorithm can be implemented in two ways:
- Iterative Method
- Recursive Method

## The general steps for both methods are discussed below:
1. The array in which searching is to be performed is:
![1](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-initial-array.png)
Let x = 4 be the element to be searched.

2. Set two pointers low and high at the lowest and the highest positions respectively.
![2](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-set-pointers.png)

3. Find the middle element mid of the array ie. arr[(low + high)/2] = 6.
![3](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid.png)

4. If x == mid, then return mid.Else, compare the element to be searched with m.

5. If x > mid, compare x with the middle element of the elements on the right side of mid. This is done by setting low to low = mid + 1.

6. Else, compare x with the middle element of the elements on the left side of mid. This is done by setting high to high = mid - 1.
![4](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-find-mid.png)

7. Repeat steps 3 to 6 until low meets high.
![5](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-mid-again.png)

8. x = 4 is found.
![6](https://cdn.programiz.com/sites/tutorial2program/files/binary-search-found.png)

## Pseudo Code:
- Iterative Approach:
do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1
        
- Recursive Approach:
binarySearch(arr, x, low, high)
    if low > high
        return False 
    else
        mid = (low + high) / 2 
        if x == arr[mid]
            return mid
        else if x > arr[mid]        // x is on the right side
            return binarySearch(arr, x, mid + 1, high)
        else                               // x is on the right side
            return binarySearch(arr, x, low, mid - 1)


