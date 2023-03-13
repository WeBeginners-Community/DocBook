// C++ program of Kadane's Algorithm
#include <bits/stdc++.h>
using namespace std;

// function to find the maximum subarray sum in an array
int kadaneAlgorithm(int arr[], int n)
{
    // initialising max_sum with minimum value and curr_sum with 0
    int max_sum = INT_MIN, curr_sum = 0;

    // looping over the array
    for (int i = 0; i < n; i++)
    {
        // updating the currsum
        curr_sum = curr_sum + arr[i];

        // max_sum will store the maximum subarray sum found till now
        max_sum = max(max_sum, curr_sum);

        // if at any point current sum becomes less than zero then
        // set the current sum to 0
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    return max_sum;
}

int main()
{
    int n;
    cin >> n;   // taking the input of number of elements in the array
    int arr[n]; // creating array

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking input in array
    }

    // Function Call
    int ans = kadaneAlgorithm(arr, n);
    cout << "Maximum contiguous sum is " << ans; // printing answer

    return 0;
}