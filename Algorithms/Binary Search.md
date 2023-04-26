# Binary Search

 Binary Search:- 
 
 •It is a searching algorithm used in a sorted array.
 
 •Time complexity is O(Log n) where, n is the number of elements in array.
 
 •Search space is divided i.e halfed everytime.
 

 

### Sample Input
```
• a[] = {1,2,3,4,5,6}, x = 2
• a[] = {1,2,3,4,5,6}, x = 7
```
### Sample Output
```
• 2 is present at index - 1
• 7 is not present

```

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std; 

int binarysearch ( int arr[] , int size , int key){
    int start = 0;
    int end = size -1;

// int mid  = (start+end)/2; // but sometme it can lead to overflow of integer

int mid  = start + (end - start )/2;

while(start<=end){

    if(arr[mid]==key){
        return mid;
    }

//search space is in right side
    else if ( arr[mid] < key){
        start = mid +1;
    }

//search space is in left side
    else{
        end = mid-1; 
    }
    //update the mid 
    mid  = start + (end - start )/2;
}
return -1; //if key not found
}

int main(){

    int a[6] = {1,2,3,4,5,6};
    int key;
    cin>>key;
  int index = binarysearch ( a , 6 , key) ; 

 if(index==-1){
        cout<<key<<" is not present\n";
 }

 else{
        cout<<key<<" is present at "<<"index - "<<index<<"\n";
 }
return 0;
}
```
