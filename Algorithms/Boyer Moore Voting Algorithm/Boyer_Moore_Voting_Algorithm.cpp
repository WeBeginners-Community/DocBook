// C++ implementation for the Boyer-Moore Voting Algorithm
#include <iostream>
using namespace std;

// Function to find majority element
int findMajority(int arr[], int n)
{
    int i, candidate = -1, votes = 0;
    // Finding majority candidate
    for(i = 0; i < n; i++) {
        if(votes == 0) {
            candidate = arr[i];
            votes = 1;
        }
        else {
            if(arr[i] == candidate) {
                votes++;
            }
            else {
                votes--;
            }
        }
    }

    int count = 0;
    // Checking if majority candidate occurs more than n/2 times
    for(i = 0; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        }
    }
 
    if(count > n / 2) {
        return candidate;
    }
    return -1;
}

int main()
{   
    // taking the input of number of elements in the array
    int n;
    cin>>n;     
    int arr[n];

    //taking the input of the elements
    for(int i = 0; i < n; i++) {
        cin>>arr[i];        
    }
    
    // calling function
    int majority = findMajority(arr, n);

    // printing the majority element
    cout << " The majority element is : " << majority;
    return 0;
}