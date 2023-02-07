# PROBLEM :

Given an unsorted array of size "n" we have to sort the array using Gnome sort.

The first line of input is the size of the array going to be given and second line represents the array elements of size "n"

       INPUT :-  4

                  [5,3,4,2]

       OUTPUT :-  

                  [2,3,4,5]

# GNOME SORTING :

--> Gnome sort is a sorting algorithm based on the concept of a Garden Gnome sorting his flower pots.

--> A garden gnome sorts the flower pots like first he checks a flower pot next to him and previous one, if they are in correct order , he moves one step forward.

--> If not he swaps the pot until it suits in the right order.

--> Gnome Algorithm will be as insertion sort but not the exact same.

This is the birth place or the history of the gnome sorting algorithm and applying this sorting of flowers to computer concepts is called as gnome sorting.



# IMPLEMENTATION :

1)	Iterative Approach

2)	Recursive Approach

I have attached the code for both. For iterative approach refer to C++ and for recursive refer to java.

# ALGORITHM :

So , there is an array of elements , let's say 5 3 2 4.

1)	You are at zeroth position, now move one step forward to your right.

2)	Check whether this element is greater than or equal to the previous element . If yes move right.

3)	If the current element is smaller than the previous element, then swap the elements.

4)	Repeat these steps till the end of an array. If it reaches the end then the array is sorted.

By seeing the below picture you can understand the algorithm very much easily.

![Gnome](https://user-images.githubusercontent.com/122768878/215247932-ae41a035-40c4-441d-b7be-600c8cc5fa6e.PNG)




# PSEUDOCODE :

Firstly sorting an array in ascending order means the elements on the left side of an element should be less than the element we chosen.

Lets take a pointer "pointer" which will be used to iterate the array whose current position is 0

1) since there is no element on left side we can move to next element by incrementing pointer by 1 to compare to say whether the array is sorted or not.

      if(pointer==0) { pointer++; }



2) If the element on the left side is greater than the pointer element we need to swap.

    if(array[pointer] < array[pointer-1]) { swap(array[pointer] < array[pointer-1]); pointer--; }



3) If the pointer element is equal or greater than the left side element we have to do nothing with the array just increment the pointer by 1, so it points to the next element.

    if(array[pointer] >= array[pointer-1]) { pointer++; }

Since first and third conditions are doing the same job we can combine it as a single if block using "OR" operator to reduce the code redundancy like this,

   if(pointer == 0 or array[pointer] < array[pointer-1]) { pointer++; }

We can use the ternary operator instead of using the if statement like this,

   pointer = (pointer == 0 || gnome_sort[pointer] >= gnome_sort[pointer-1]) ? pointer+1 : pointer;

# COMPLEXITIES :

Time Complexity  : BigO(n^2)

Space Complexity : BigO(1)

Space Complexity : BigO(n)  --> Incase if you used recursion for sorting.

