# Merge Sort  

### INTRODUCTION  

Merge sort is the sorting technique that follows the divide and conquer approach. Merge sort is similar to the quick sort algorithm as it uses the divide and conquer approach to sort the elements. It is one of the most popular and efficient sorting algorithm. It divides the given list into two equal halves, calls the function merge sort for the two halves and then merges the two sorted halves. 

The sub-lists are divided again and again into halves until the list cannot be divided further. Then we combine the pair of one element lists into two-element lists, sorting them in the process. The sorted two-element pairs is merged into the four-element lists, and so on until we get the sorted list.

We have to define the merge() function to perform the merging.

### ALGORITHM EXPLAINED

So we have an unsorted array which containes 8 elements

![1](https://user-images.githubusercontent.com/65494453/212306286-ead1050c-543d-48fc-b6dd-2a0eea61da56.png)

Now we will divide the array each time into two halves, till we get all individual elements. 

![2](https://user-images.githubusercontent.com/65494453/212306429-7e83f296-ac01-44cf-84c6-471ea0f11ed5.png)
![3](https://user-images.githubusercontent.com/65494453/212306438-a9b87b34-bc4a-451a-b032-c769ae7f9398.png)
![4](https://user-images.githubusercontent.com/65494453/212306442-39eb2146-516a-4337-9075-0eff5f2968d0.png)


Now we will merge elememts in a sorted pair and eventually our array will get sorted. 

![5](https://user-images.githubusercontent.com/65494453/212306493-102a0d4b-2e48-4220-a967-8639b8d5be79.png)
![6](https://user-images.githubusercontent.com/65494453/212306497-a7f63b1d-52ca-4c76-90bb-ceffc3bcfcdc.png)

After the final merging of above arrays, the array will look like -

![7](https://user-images.githubusercontent.com/65494453/212306499-8014e77f-0a7a-442d-b515-1868a1b29ad4.png)

Now, the array is completely sorted.

### Time Complexity

Case	|Time Complexity
|:-------:|:------:|
Best Case	|O(n*logn)|
Average Case	|O(n*logn)|
Worst Case	|O(n*logn)|

### PSEUDOCODE 

We will have two function : 

**Merge Sort** - Here we will divide the array into two halves til beg<end, apply merge sort on 2 halves and then merge the two arrays. 

**Merge**  - Initially copy the elements in 2 arrays and compare the elements of both the arrays using indices i, j and k. 

    MERGE_SORT(arr, beg, end)  

    if beg < end  
    set mid = (beg + end)/2  
    MERGE_SORT(arr, beg, mid)  
    MERGE_SORT(arr, mid + 1, end)  
    MERGE (arr, beg, mid, end)  
    end of if  

    END MERGE_SORT   

    /* Function to merge the subarrays of a[] */  
    void merge(int a[], int beg, int mid, int end)    
    {    
        int i, j, k;  
        int n1 = mid - beg + 1;    
        int n2 = end - mid;    

        int LeftArray[n1], RightArray[n2]; //temporary arrays  

        /* copy data to temp arrays */  
        for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[beg + i];    
        for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];    

        i = 0, /* initial index of first sub-array */  
        j = 0; /* initial index of second sub-array */   
        k = beg;  /* initial index of merged sub-array */  

        while (i < n1 && j < n2)    
        {    
            if(LeftArray[i] <= RightArray[j])    
            {    
                a[k] = LeftArray[i];    
                i++;    
            }    
            else    
            {    
                a[k] = RightArray[j];    
                j++;    
            }    
            k++;    
        }    
        while (i<n1)    
        {    
            a[k] = LeftArray[i];    
            i++;    
            k++;    
        }    

        while (j<n2)    
        {    
            a[k] = RightArray[j];    
            j++;    
            k++;    
        }    
    }    

### Output:

![8](https://user-images.githubusercontent.com/65494453/212306604-fd024660-d51a-4e9b-adad-9fa2dfd7354d.png)
