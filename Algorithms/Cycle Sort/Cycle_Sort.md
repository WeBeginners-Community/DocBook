# Cycle Sort
**Cycle sort** is an in-place, unstable sorting algorithm that is particularly useful when sorting arrays containing elements with a small range of values.

The basic idea behind cycle sort is to divide the input array into cycles, where each cycle consists of elements that belong to the same position in the sorted output array. The algorithm then performs a series of swaps to place each element in its correct position within its cycle, until all cycles are complete and the array is sorted.

**Here’s a step-by-step explanation of the cycle sort algorithm:**

1. Start with an unsorted array of n elements.
2. Initialize a variable, cycleStart, to 0.
3. For each element in the array, compare it with every other element to its right. If there are any elements that are smaller than the current element, increment cycleStart.
4. If cycleStart is still 0 after comparing the first element with all other elements, move to the next element and repeat step 3.
5. Once a smaller element is found, swap the current element with the first element in its cycle. The cycle is then continued until the current element returns to its original position.

Repeat steps 3-5 until all cycles have been completed.

The array is now sorted.


One of the advantages of cycle sort is that it has a low memory footprint, as it sorts the array in-place and does not require additional memory for temporary variables or buffers. However, it can be slow in certain situations, particularly when the input array has a large range of values. Nonetheless, cycle sort remains a useful sorting algorithm in certain contexts, such as when sorting small arrays with limited value ranges.

Cycle sort is an in-place sorting Algorithm, unstable sorting algorithm, and a comparison sort that is theoretically optimal in terms of the total number of writes to the original array. 
 
- It is optimal in terms of the number of memory writes. It minimizes the number of memory writes to sort.

- It is based on the idea that the array to be sorted can be divided into cycles. Cycles can be visualized as a graph. We have n nodes and an edge directed from node i to node j if the element at i-th index must be present at j-th index in the sorted array.

**Time Complexity:** O(n<sup>2</sup>)

**Auxiliary Space:** O(1)