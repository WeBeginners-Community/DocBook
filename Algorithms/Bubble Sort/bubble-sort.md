# Bubble Sort

Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order.

Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

## Working of Bubble Sort
Suppose we are trying to sort the elements in ascending order.

1. First Iteration (Compare and Swap)

    i. Starting from the first index, compare the first and the second elements.
    ii. If the first element is greater than the second element, they are swapped.
    iii. Now, compare the second and the third elements. Swap them if they are not in order.
    iv. The above process goes on until the last element.
    ![1](https://www.programiz.com/sites/tutorial2program/files/Bubble-sort-0.png)
    
2. Remaining Iteration

    The same process goes on for the remaining iterations.

    After each iteration, the largest element among the unsorted elements is placed at the end.)
    ![2](https://www.programiz.com/sites/tutorial2program/files/Bubble-sort-1.png)


In each iteration, the comparison takes place up to the last unsorted element.
![3](https://www.programiz.com/sites/tutorial2program/files/Bubble-sort-3.png)


## Pseudo Code
    `procedure bubbleSort( list : array of items )

    loop = list.count;
    
    for i = 0 to loop-1 do:
        swapped = false
            
        for j = 0 to loop-1 do:
        
            /* compare the adjacent elements */   
            if list[j] > list[j+1] then
                /* swap them */
                swap( list[j], list[j+1] )		 
                swapped = true
            end if
            
        end for
        
        /*if no number was swapped that means 
        array is sorted now, break the loop.*/
        
        if(not swapped) then
            break
        end if
        
    end for
    
    end procedure return list`
