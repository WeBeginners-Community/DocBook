// C++ program to sort an array with 0, 1 and 2 in a single pass
#include <bits/stdc++.h>
using namespace std;
 
// Function to sort the input array, the array is assumed
// to have values in {0, 1, 2}
void sort012(int a[], int n) {

    int lo = 0;
    int hi = n - 1;
    int mid = 0;
 
    // Iterate till all the elements are sorted
    while(mid <= hi) {
        // If the element is 0
        if(a[mid] == 0) {
            swap(a[lo], a[mid]);
            lo++;
            mid++;
        }

        // If the element is 1
        if(a[mid] == 1) {
            mid++;
        }
 
        // If the element is 2
        if(a[mid] == 2) {
            swap(a[mid], a[hi]);
            hi--;
        }
    }
}
 
int main() {

    int n;
    cin >> n;         //taking input of number of elements in the array
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];        //taking input of the elements in the array
    }
 
    sort012(arr, n);        //calling the fuction to sort the array
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";      //printing the array
    }
 
    return 0;
}