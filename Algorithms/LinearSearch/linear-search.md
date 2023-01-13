# Linear Search

Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found.

It is the simplest searching algorithm.

## How Linear Search Works

1. The array in which searching is to be performed is:
![1](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-initial-array.png)
Let k = 1 be the element to be searched.

2. Start from the first element, compare k with each element x.
![2](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-comparisons.png)

3. If x == k, return the index.
![3](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-found.png)
Element found.

4. Else, return not found.

## Pseudo Code

int search(int arr[], int N, int k) //arr[]-array of elements N-Size of array k-Element to be searched
{
   int i;
   for (i = 0; i < N; i++)
      if (arr[i] == k) then
         return i;
   return -1;
}
