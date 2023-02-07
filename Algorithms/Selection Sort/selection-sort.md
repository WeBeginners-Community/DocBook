
# Selection Sort

A sorting algorithm is used to arrange elements of an array/list in a specific order. 
First, the array is divided into two parts: a sorted portion and an unsorted portion.
 
The sorted portion starts as an empty array and the unsorted portion contains all of the elements.
The algorithm selects the smallest element from the unsorted portion and adds it to the end of the sorted portion.
This process is repeated until the unsorted portion is empty and the entire array is sorted.
![11](https://www.programiz.com/sites/tutorial2program/files/sorting.png)

## Working of Selection Sort
1. Set the first element as minimum.
![1](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0-initial-array.png)


2. Compare minimum with the second element. If the second element is smaller than minimum, assign the second element as minimum.

Compare minimum with the third element. Again, if the third element is smaller, then assign minimum to the third element otherwise do nothing. The process goes on until the last element.
![2](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0-comparision.png)

3. After each iteration, minimum is placed in the front of the unsorted list.
![3](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0-swapping.png)

4. For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions.
![4](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-0.png)
![5](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-1.png)
![6](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-2.png)
![7](https://www.programiz.com/sites/tutorial2program/files/Selection-sort-3_1.png)

#Visualization

 
![selection sortt](https://user-images.githubusercontent.com/98210740/212728104-650e9fed-46f4-4f9c-b94b-297f4a4dcf29.gif)
______________________________________________________________________________________________

##Pseudo Code
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort

