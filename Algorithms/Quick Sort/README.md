# Quick Sort
Quick Sort is a sorting algorithm based on the divide and conquer algorithm. We first initialize a pivot value and place it in its correct position in the array, such that all elements (unsorted or sorted) less than the pivot are placed on the left-hand side and the elements greater than or equal to the pivot are placed on the right-hand side of the pivot.

**Time Complexity:**  O(n^2) (Worst Case)

The 2 subarrays created, are then recursively sorted.

**We can pick an element as a pivot in the following ways:**

       1) Pick the first element as a pivot.
       2) Pick the last element as a pivot.
       3) Pick a random element as a pivot.
       4) Choose the median as the pivot.
 
### BASIC OPERATIONS AND STEPS FOLLOWED ### 
There are two basic operations in the algorithm:

* **partitioning a section of the array.** 
* **swapping items in place.**


-First, we will pick a Pivot Element.

-We will initialize a left pointer at the first element of the array.

-We will initialize a right pointer at the last element of the array. 

-While the value at the left pointer in the array is less than the pivot value, move the left pointer to the right (add 1). 

-Continue until the value at the left pointer is greater than or equal to the pivot value.

-While the value at the right pointer in the array is greater than the pivot value, move the right pointer to the left (subtract 1).

-Continue until the value at the right pointer is less than or equal to the pivot value.

-If the left pointer is less than or equal to the right pointer, then swap the values at these locations in the array.

-Move the left pointer to the right by one and the right pointer to the left by one.

-We have to continue this till the left < right. When left > right, we will have to stop. 

-Then our pivot element is placed at the right position, with 2 subarrays. 

-One subarray has all elements less than the pivot value (left) and the other subarray has all elements greater than equal to the pivot value (right).

-We will call quick sort recursively on these two subarrays. 


**Let us understand this with the help of an example.**

Suppose we have an array [4,2,6,5,3,9] We will assume 5 as the pivot element. 

![Step 1 1](https://user-images.githubusercontent.com/98229024/200398055-78ce1c56-c06f-4121-a995-d7979f7e1c05.png)

Now we will initialize the 2 pointers left and right to their respective positions. 

![Step 1 2](https://user-images.githubusercontent.com/98229024/200398298-e9725127-cae1-4c6d-9334-c86dbf9c6ba0.png)

Since 4<5 we will increament the left by 1. 

![Step 1 3](https://user-images.githubusercontent.com/98229024/200398887-8256405e-88f7-403a-b5b8-28b1fa8edbcf.png)

Again 2<5 so we will increament left by 1. But now 6>5 so we will stop the left pointer at 6. And now we will move the right pointer. 

![Step 1 4](https://user-images.githubusercontent.com/98229024/200399157-3af202e9-4a16-489f-b8d0-ab274145fa0f.png)

Now 9>5 so right would be decresed by 1. But 3<5 so we will now swap the elements at right and left pointer (6,3)

![Step 1 5](https://user-images.githubusercontent.com/98229024/200399452-04d59ec7-c406-4033-bc61-52048aa180bd.png)

![Step 1 6](https://user-images.githubusercontent.com/98229024/200399515-6ac549f1-72fa-4af2-9b53-223d57b0375c.png)

Now we will move pointers one more step and L=R condition would satisfy so after that we can't swap, and hence we have fixed our pivot element at right position. 

![Step 1](https://user-images.githubusercontent.com/98229024/200400331-19883915-f789-43b0-9086-dc173f5a388d.png)

![step 1 8](https://user-images.githubusercontent.com/98229024/200400381-925c2acb-bac3-4ffc-b982-d55313f50192.png)

Recursive call on the 2 subarrays. 

### PSEUDOCODE ### 

//Let us assume we take the first element as the pivot. 

partition(arr,lb,ub){

  p=arr[lb]
  
  start=lb
  
  end=ub
  
  while (start<end){
  
     while (arr[start]<p){
     
       start++
     
     }
     
     while (arr[end]>=p){
     
       end--
     }
     
     if (start<end)
     
       swap(arr[start], arr[end])
  }
  
  swap(a[lb],a[end]) // the final position of assumed pivot is at the end
  
  return end;

}

quickSort(arr,lb,ub){

  if (lb<ub){
  
    location=partition(arr,lb,ub)
    
    quickSort(arr,lb,location-1)
    
    quickSort(arr,location+1,ub)
    
    }

}








