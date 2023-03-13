# Kadane’s Algorithm
## Problem Statement
Given an array **arr[]** of size **N**. The task is to find the sum of the contiguous subarray within a **arr[]** with the largest sum. 

The idea of **Kadane’s algorithm** is to maintain a variable that stores the maximum sum contiguous subarray ending at current index and a variable that stores the maximum sum of contiguous subarray found so far, Everytime there is a positive-sum value in current sum compare it with maximum sum and update maximum sum if it is greater than maximum sum.

So the main **Intuition** behind **Kadane’s algorithm** is, 

- the subarray with negative sum is discarded (by assigning current sum to 0 in code).

- we carry subarray till it gives positive sum.


Follow the below steps to Implement the idea:

- Initialize the variables max_sum = INT_MIN and curr_sum = 0.
- Run a for loop from **0** to **N-1** and for each index **i**: 
    - Add the arr[i] to curr_sum.
    - If max_sum is less than curr_sum then update max_sum to curr_sum.
    - If curr_sum < 0 then update curr_sum = 0.
- Return max_sum.

**Time Complexity:** O(N)

**Auxiliary Space:** O(1)