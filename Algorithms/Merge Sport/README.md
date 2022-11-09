# Merge Sort # 

### INTRODUCTION ### 

Merge sort is the sorting technique that follows the divide and conquer approach. Merge sort is similar to the quick sort algorithm as it uses 
the divide and conquer approach to sort the elements. It is one of the most popular and efficient sorting algorithm. 

It divides the given list into two equal halves, calls the function merge sort for the two halves and then merges the two sorted halves. 

The sub-lists are divided again and again into halves until the list cannot be divided further. 

Then we combine the pair of one element lists into two-element lists, sorting them in the process. 

The sorted two-element pairs is merged into the four-element lists, and so on until we get the sorted list.

We have to define the merge() function to perform the merging.

The Time Complexity of Merge Sort is O(nlogn)

### ALGORITHM EXPLAINED ###

So we have an unsorted array which containes 8 elements: [12,31,25,8,32,17,40,42]

![Screenshot (380) 1](https://user-images.githubusercontent.com/98229024/200805936-ea5e389c-688b-4576-aab9-54e77fe2b4b2.png)

Now we will divide the array each time into two halves, till we get all individual elements. 

![Screenshot (380)2](https://user-images.githubusercontent.com/98229024/200806571-a0fbdc47-cb85-47c9-85f3-1d35f07b0481.png)

![Screenshot (381)1](https://user-images.githubusercontent.com/98229024/200806639-4d772ca0-e1d8-4277-99e8-2c5cad7cd1c0.png)

![Screenshot (381)](https://user-images.githubusercontent.com/98229024/200806759-2bca42f2-5ec9-454c-8a83-557bb18ee778.png)

Now we will merge elememts in a sorted pair and eventually our array will get sorted. 

![Screenshot (382) 1](https://user-images.githubusercontent.com/98229024/200806903-c5047516-ebcf-429e-87fc-f966a511a1c5.png)

![Screenshot (382) 2](https://user-images.githubusercontent.com/98229024/200806995-4343556e-7027-4c05-921f-3f4a2979ae9a.png)

![Screenshot (382)](https://user-images.githubusercontent.com/98229024/200806832-a489873f-1259-4f1a-9c4b-6426bf0f0235.png)







### PSEUDOCODE ### 

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

merge(arr[], beg, mid, end)

{    
     
     i, j, k;  
     
     n1 = mid - beg + 1;    
     
     n2 = end - mid;    
      
     LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    
    for (int i = 0; i < n1; i++)    
    
    LeftArray[i] = a[beg + i];    
    
    for (int j = 0; j < n2; j++)    
    
    RightArray[j] = a[mid + 1 + j];    
      
    
    i = 0, // Initial index of subarray 1  
    
    j = 0; // Initial index of subarray 2 
    
    k = beg;  // Initial index of the merged subarray 
      
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
    
    while (i<n1) /// elements left of subarray 1   
    
    {    
        
        a[k] = LeftArray[i];    
        
        i++;    
        
        k++;    
    
    }    
      
    while (j<n2)  // elements left of subarray 2   
    
    {    
        
        a[k] = RightArray[j];    
        
        j++;    
        
        k++;    
    
    }    

}    
