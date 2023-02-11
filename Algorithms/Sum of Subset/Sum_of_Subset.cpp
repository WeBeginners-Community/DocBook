#include <bits/stdc++.h>

using namespace std;

// Returns true if there is a subset of set[] with sum equal to given sum.
bool isSubsetSum(int set[], int n, int sum, vector<vector<int> >& dp)
{
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;

    // If the result has already been computed, return it
    if (dp[n][sum] != -1)
        return dp[n][sum];

    // If last element is greater than sum, then ignore that case
    if (set[n - 1] > sum)
        dp[n][sum] = isSubsetSum(set, n - 1, sum, dp);
    else
        // Else, check if sum can be obtained by either including or excluding the last element
        dp[n][sum] = isSubsetSum(set, n - 1, sum, dp) || isSubsetSum(set, n - 1, sum - set[n - 1], dp);

    return dp[n][sum];
}

int main()
{
    int set[] = {5, 10, 15, 20, 25, 30};
    
    int sum = 60;
    
    int n = sizeof(set) / sizeof(set[0]);

    vector<vector<int> > dp(n + 1, vector<int>(sum + 1, -1));
    
    if (isSubsetSum(set, n, sum, dp) == true)
        cout << "Found a subset with given sum";
    else
        cout << "No subset with given sum";
 
    return 0;

}
