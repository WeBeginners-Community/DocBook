// C++ program to implement cycle sort
#include <iostream>
using namespace std;

// Function sort the array using Cycle sort
void cycleSort(int arr[], int n)
{
    // traverse array elements and put it to on the right place
    for (int ind = 0; ind < n - 1; ind++)
    {
        // initialize num as starting point
        int num = arr[ind];

        // Find position where we put num. We basically
        // count all smaller elements on right side of num.
        int pos = ind;
        for (int i = ind + 1; i < n; i++)
        {
            if (arr[i] < num)
            {
                pos++;
            }
        }

        // If num is already in correct position
        if (pos == ind)
        {
            continue;
        }

        // ignore all duplicate  elements
        while (num == arr[pos])
        {
            pos += 1;
        }

        // put the num to it's right position
        if (pos != ind)
        {
            swap(num, arr[pos]);
        }

        // Rotate rest of the cycle
        while (pos != ind)
        {
            pos = ind;

            // Find position where we put the element
            for (int i = ind + 1; i < n; i++)
            {
                if (arr[i] < num)
                {
                    pos += 1;
                }
            }

            // ignore all duplicate  elements
            while (num == arr[pos])
            {
                pos += 1;
            }

            // put the num to it's right position
            if (num != arr[pos])
            {
                swap(num, arr[pos]);
            }
        }
    }
}

int main()
{
    // take input of number of elements
    int n;
    cin >> n;
    int arr[n];

    // create array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // function call
    cycleSort(arr, n);

    // print the array after cycle sort
    cout << "After sort : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}