# Sort an array of 0s, 1s and 2s | Dutch National Flag problem
## Problem Statememt

Given an array **A[]** consisting of only **0s, 1s, and 2s**. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

This problem is also the same as the famous **“Dutch National Flag problem”**. The problem was proposed by Edsger Dijkstra. The problem is as follows:

*Given N balls of colour red, white or blue arranged in a line in random order. You have to arrange all the balls such that the balls with the same colours are adjacent with the order of the balls, with the order of the colours being red, white and blue (i.e., all red coloured balls come first then the white coloured balls and then the blue coloured balls).*

Examples:

```
Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
```

This approach is based on the following idea:

- The problem is similar to “Segregate 0s and 1s in an array”.
- The problem was posed with three colors, here '0', '1' and '2'. The array is divided into three sections:
    - arr[1] to arr[low – 1]
    - arr[low] to arr[mid – 1]
    - arr[mid] to arr[high – 1]
    - arr[high] to arr[n]
- If the ith element is 0 then swap the element to the low range.
- Similarly, if the element is 1 then keep it as it is.
- If the element is 2 then swap it with an element in high range.

Follow the steps below to solve the given problem:

- Keep three indices low = 1, mid = 1, and high = N and there are four ranges, 1 to low (the range containing 0), low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N (the range containing 2).
- Traverse the array from start to end and mid is less than high. (Loop counter is i)
- If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1
- If the element is 1 then update mid = mid + 1
- If the element is 2 then swap the element with the element at index high and update high = high – 1 and update i = i – 1. As the swapped element is not processed
- Print the array.

**Illustration:**

arr[] = {0, 1, 2, 0, 1, 2}

lo = 0, mid = 0, hi = 5

```
Step 1: arr[mid] == 0

swap(arr[lo], arr[mid])
lo = lo + 1 = 1
mid = mid + 1 = 1
```
arr[] = {0, 1, 2, 0, 1, 2}

```
Step 2: arr[mid] == 1

mid = mid + 1 = 2
```
arr[] = {0, 1, 2, 0, 1, 2}

```
Step 3: arr[mid] == 2

swap(arr[mid], arr[hi])
hi = hi – 1 = 4
```
arr[] = {0, 1, 2, 0, 1, 2}

```
Step 4: arr[mid] == 2

swap(arr[mid], arr[hi])
hi = hi – 1 = 3
```
arr[] = {0, 1, 1, 0, 2, 2}

```
Step 5: arr[mid] == 1

mid = mid + 1 = 3
```
arr[] = {0, 1, 1, 0, 2, 2}

```
Step 6: arr[mid] == 0

swap(arr[lo], arr[mid])
lo = lo + 1 = 2
mid = mid + 1 = 4
```
arr[] = {0, 0, 1, 1, 2, 2}

Hence, **arr[] = {0, 0, 1, 1, 2, 2}**