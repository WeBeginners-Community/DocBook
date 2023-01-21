•INTRODUCTION

The Knapsack Problem is an Optimization Problem in which we have to find an optimal answer among all the possible combinations. In this problem, we are given a set of items having different weights and values. We have to find the optimal solution considering all the given items. There are three types of knapsack problems : 0-1 Knapsack, Fractional Knapsack and Unbounded Knapsack.In the 0-1 Knapsack Problem, we are given a Knapsack or a Bag that can hold weight up to a certain value. We have various items that have different weights and values associated with them. Now we have to fill the knapsack in such a way so that the sum of the total weights of the filled items does not exceed the maximum capacity of the knapsack and the sum of the values of the filled items is maximum. 

![image](https://user-images.githubusercontent.com/59620280/213859330-fc1ea9fa-d5f3-4999-b8c1-fdfdb3395f6e.png)


•What is Optimization problems?

An optimization problem consists to find the best solution among all possible ones. For example, in the Bin Packing Problem (BPP) the aim is to find the right number of boxes of a given size to store a set of objects of given sizes; optimization involves, for example, finding the smallest number of boxes.

•Problem Statement

Given a Knapsack with maximum weight limit as W and two arrays value[] and weight[]. You have to fill the knapsack in such a way so that the total weight of the filled items is less than or equal to W and the sum of the values of the filled items is maximum. value[i] and weight[i] will store the value and weight associated with ith item. You can not partially fill an item in the knapsack.


•Solution of 0/1 knapsack problem.

•Consider the same cases as mentioned in the recursive approach. 
•In a DP[][] table let’s consider all the possible weights from ‘1’ to ‘W’ as the columns and weights that can be kept as rows. 
•The state DP[i][j] will denote the maximum value of ‘j-weight’ considering all values from ‘1 to ith’. So if we consider ‘wi’ (weight in ‘ith’ row) we can fill it in all columns which have ‘weight values > wi’. Now two possibilities can take place: 
•Fill ‘wi’ in the given column.
•Do not fill ‘wi’ in the given column.
•Now we have to take a maximum of these two possibilities, formally if we do not fill the ‘ith’ weight in the ‘jth’ column then the DP[i][j] state will be the same as  DP[i-1][j] but if we fill the weight, DP[i][j] will be equal to the value of ‘wi’+ value of the column weighing ‘j-wi’ in the previous row. 
•So we take the maximum of these two possibilities to fill the current state. 

    Let weight elements = {1, 2, 3}
    Let weight values = {10, 15, 40}
    Capacity=6

       0   1   2   3   4   5   6
    0  0   0   0   0   0   0   0
    1  0  10  10  10  10  10  10
    2  0  10  15  25  25  25  25
    3  0  

    Explanation:

    For filling ‘weight = 2’ we come 
    across ‘j = 3’ in which 
    we take maximum of 
    (10, 15 + DP[1][3-2]) = 25   
    
  

    Explanation:

    For filling ‘weight=3’, 
    we come across ‘j=4’ in which 
    we take maximum of (25, 40 + DP[2][4-3])  = 50

    For filling ‘weight=3’ 
    we come across ‘j=5’ in which 
    we take maximum of (25, 40 + DP[2][5-3]) = 55

    For filling ‘weight=3’ 
    we come across ‘j=6’ in which 
    we take maximum of (25, 40 + DP[2][6-3]) = 65 
    


•Code for 0/1 Knapsack Problem

    #include <bits/stdc++.h>

    using namespace std;
 

    int max(int a, int b) { return (a > b) ? a : b; }
 

    int knapSack(int W, int wt[], int val[], int n)

    {
    int i, w;
    
    vector<vector<int> > K(n + 1, vector<int>(W + 1));
 
    
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1]
                                  + K[i - 1][w - wt[i - 1]],
                              K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
 }
 

     int main()
     {
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
 
    cout << knapSack(W, wt, val, n);
 
    return 0;
    }
    
•Time complexity

Time complexity for 0/1 Knapsack problem solved using DP is O(N*W) where N denotes number of items available and W denotes the capacity of the knapsack.
