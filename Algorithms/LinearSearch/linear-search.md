# Linear Search algorithm

Linear Seach Algorithm is a sequential searching algorithm used to search a specfic element from the given array of elements.

## How Linear Search Works

1. The following steps are followed to search for an element k = 1 in the list below.
   ![1](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-initial-array.png)
   (Array to be searched for)

2. Start from the first element, compare k with each element x.
   ![2](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-comparisons.png)
   (Compare with each element)

3. if x == k, return the index.
   ![3](https://cdn.programiz.com/sites/tutorial2program/files/linear-search-found.png)
   (Element Found)

4. Else return not found.

## Pseudo Code

int search(int arr[], int N, int x) //arr[]-array of elements N-Size of array x-Element to be searched
{
int i; //Loop variable
for (i = 0; i < N; i++) //Traverse the array
if (arr[i] == x) then  
return i; //If element is found
return -1; //If element is not found
}
