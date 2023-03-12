# Jump Search

Jump Search Algorithm is an algorithm for searching an element in a sorted array.

The fundamental idea behind this searching technique is to search fewer number of elements compared to linear search algorithm. This can be done by skipping some fixed number of array elements or **jumping ahead by fixed number of steps** in every iteration.

## Algorithm of Jump Search

Algorithm for implementing Jump search:

**Input:**

Sorted array A of size n

Element to be searched

**Output:**

A valid location of key in the array A

### Steps for Jump Search Algorithms:

**Step 1:** Set `i=0` and `m = √n`.

**Step 2:** Compare `A[i]` with `key`. If `A[i] != key` and `A[i] < key`, then jump to the next block. Also, do the following:

1. Set **i = m**
2. Increment `m` by `√n`

**Step 3:** Repeat the step 2 till **m < n-1**

**Step 4:** If `A[i] > key`, then move to the beginning of the current block and perform a linear search.

1. Set **x = i**
2. Compare `A[x]` with `key`. If `A[x]== key`, then print `x` as the valid location else set `x++`.
3. Repeat Step 4.1 and 4.2 till **x < m**

**Step 5:** Exit

**Time Complexity:** O(√n)

**Space Complexity:** O(1)
