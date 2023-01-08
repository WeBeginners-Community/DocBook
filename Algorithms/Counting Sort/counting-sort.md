# Counting Sort # 

### INTRODUCTION ### 
Count sort is an unusual sorting algorithm that does not make comparisons.
Sort by counting instead of comparing.

The core of Counting Sort is to convert input data values into keys and store them in additional array space. As a kind of linear time complexity, counting sort requires the input data to be integers in a certain range.

Count sort is a stable sorting algorithm. Counting sort uses an additional array count array, where the i-th element is the number of elements in the original array to be sorted whose value equals i. Then put the elements of A in the correct position according to the count array.


### ALGORITHM ###
1. Find the largest and smallest elements in the array to sort.
1. Count the number of occurrences of each element with value i in the array and store it in the i-th item of array C.
1. Accumulate all counts (starting with the first element of C, each item is added to the previous item).
1. Backfill the target array: Place each element i into the C(i) item of the new array, subtracting 1 from C(i) each time you place an element.

### ALGORITHM EXPLAINED ###

Now we have an unsorted array which contains 6 elements - {3,5,8,2,5,4} 

![1](https://user-images.githubusercontent.com/98808802/211190059-21b04fd0-4430-4edd-8241-bc3398e71b38.png)

Now after we have found the largest and smallest elemtn in an array. Next we will create another array called the count array. The indexes of count array is equal to the frequency of the elements of our original unsorted array.

![2](https://user-images.githubusercontent.com/98808802/211190071-3f34233b-1719-4d7b-ac86-d611eb6096b4.png)

Next is the final sorting step where we will run a while loop till the element of count array becoems zero since it is equl to the frequency of the elemnt sof our original array.

![3](https://user-images.githubusercontent.com/98808802/211190074-e213ff0d-5c2c-40ec-b2d6-94ed8ad4fa1a.png)

Hence we have finally got our sorted array - {2,3,4,5,5,8}
  

### TIME COMPLEXITY ###

If the input elements are n integers in [0, k], its running time is O(n+k). Count sort is not a comparison sort and the sorting speed is faster than any comparison sort algorithm. Since the length of the count array used for counting depends on the extent of the data in the sorted array (equal to the difference between the maximum and minimum values in the sorted array plus one), this results in Count sorting is done. Arrays with extensive data require a lot of time and memory.

The best time calculation amount: T(n) = O(n+k)
Maximum calculation time: T(n) = O(n+k)
Average time calculation: T(n) = O(n+k)

### ADVANTAGES: ###

Efficiency- Counting sort is an efficient sorting algorithm for smaller inputs. The time required performing counting sort is linear.
 
 ### DISADVANTAGES ###
 Only integers can be sorted using this method.
 Become sslow for very large arrays.
 Needs additional memory to store count array.
 
 
# Implemented Code in Java #
 
 ```java
 public class counting_sort {
    // We will be using counting sort.
    // Efficient for smaller range.
    // Time Complexity - O(n+k) | Space Complexity - O(n+k)

    public static void Sort(int[] nums) {

        //STEP 1 : largest element in the array.
        int largest = Integer.MIN_VALUE;

        for(int i=0; i<nums.length; i++){
          largest = Math.max(largest, nums[i]);
        }

        //STEP 2 : making our count array
        int count[] = new int[largest+1]; //this array keeps track of the coutn frequency of numbers equal to its index

        for(int i=0;i<nums.length;i++){
            count[nums[i]]++;  //writing the frequncy in coutn array
        }

        //STEP 3 : Sorting
        for(int i=0,j=0;i<count.length;i++){
            while(count[i]>0){
                nums[j]=i;
                j++;
                count[i]--;
            }
        }
    }

    static void Printarr(int arr[]) 
    {
        for (int i = 0; i < arr.length; i++) 
        {
            System.out.print(arr[i] + ", ");
        }
    
    }

    public static void main(String args[]) {
        int nums[] = { 1, 4, 3, 2, 4, 3, 7 };
        System.out.println("Original Array : ");
        Printarr(nums);
        System.out.println();
        System.out.println("Sorted Array : ");
        Sort(nums);
        Printarr(nums);
    }
}
```
