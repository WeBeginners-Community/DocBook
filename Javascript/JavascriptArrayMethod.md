 #Introduction :
 In JavaScript, arrays aren't primitives but are instead Array objects with the following core characteristics:

 JavaScript arrays are resizable and can contain a mix of different data types. (When those characteristics are undesirable, use typed arrays instead.

JavaScript arrays are not associative arrays and so, array elements cannot be accessed using arbitrary strings as indexes, but must be accessed using nonnegative integers or their respective string form) as indexes.

JavaScript arrays are zero-indexed: the first element of an array is at index 0, the second is at index 1, and so on — and the last element is at the value of the array's length property minus 1.

JavaScript array-copy operations create shallow copies. All standard built-in copy operations with any JavaScript objects create shallow copies, rather than deep copies.

#JavaScript Array Methods:

Converting Arrays to Strings :- The JavaScript method toString() converts an array to a string of (comma separated) array values.

#Popping and Pushing :-

JavaScript Array pop() :- The pop() method removes the last element from an array.

JavaScript Array push() :- The push() method adds a new element to an array at the end.

#Shifting Methods:-

JavaScript Array shift() :- The shift() method removes the first array element and "shifts" all other elements to a lower index.

JavaScript Array unshift() :- The unshift() method adds a new element to an array (at the beginning), and "unshifts" older elements.

#Changing Elements :- Array elements are accessed using their index number:
Array indexes start with 0:

[0] is the first array element
[1] is the second
[2] is the third ...

JavaScript Array length :- The length property provides an easy way to append a new element to an array.

JavaScript Array delete() :- Array elements can be deleted using the JavaScript operator delete.

Merging (Concatenating) Arrays :- The concat() method creates a new array by merging (concatenating) existing arrays.


#Splicing and Slicing Arrays:

JavaScript Array splice() :- The splice() method can be used to add new items to an array.

Example :- const fruits = ["Banana", "Orange", "Apple", "Mango"];
fruits.splice(2, 0, "Lemon", "Kiwi");

The first parameter (2) defines the position where new elements should be added (spliced in).

The second parameter (0) defines how many elements should be removed.

The rest of the parameters ("Lemon" , "Kiwi") define the new elements to be added.

JavaScript Array slice() :-The slice() method slices out a piece of an array into a new array.

Note :-
The slice() method creates a new array.

The slice() method does not remove any elements from the source array.


#sample code of Array Methods 

#Example 1:

const fruits = ["Apple", "Banana"];
console.log(fruits.indexOf("Banana"));


This example uses the indexOf() method to find the position (index) of the string "Banana" in the fruits array.

#Example 2:

const fruits = ["Apple", "Banana"];
fruits.includes("Banana"); // true
fruits.includes("Cherry"); // false

// If indexOf() doesn't return -1, the array contains the given item.
fruits.indexOf("Banana") !== -1; // true
fruits.indexOf("Cherry") !== -1; // false

This example shows two ways to check if the fruits array contains "Banana" and "Cherry": first with the includes() method, and then with the indexOf() method to test for an index value that's not -1.

#Example 3:

const fruits = ["Apple", "Banana", "Orange"];
const removedItem = fruits.pop();
console.log(fruits);
// ["Apple", "Banana"]
console.log(removedItem);
// Orange

This example uses the pop() method to remove the last item from the fruits array.

#Example 4:

const fruits = ["Apple", "Banana", "Strawberry", "Mango", "Cherry"];
const start = 2;
const removedItems = fruits.splice(start);
console.log(fruits);
// ["Apple", "Banana"]
console.log(removedItems);
// ["Strawberry", "Mango", "Cherry"]

This example uses the splice() method to truncate the fruits array down to just its first 2 items




































