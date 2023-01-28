 • INTRODUCTION

 Subset sum problem is to find subset of elements that are selected from a given set whose sum adds up to a given number K. We are considering the set contains 
 
 non-negative values.It is assumed that the input set is unique.
 
• EXAMPLE

We have a set of 5 integers given below:

N = 4, -2, 2, 3, 1

We want to find out the subset whose sum is equal to 5. There are many solutions to this problem. The naïve approach, i.e., brute-force search generates 
all the possible subsets of the original array, i.e., there are 2n possible states. Here the running time complexity would be exponential. Then, we consider 
all these subsets in O(N) linear running time and checks whether the sum of the items is M or not. The dynamic programming has pseudo-polynomial running time.


• COMPLEXITY ANALYSIS:

O(sum*n), where sum is the ‘target sum’ and ‘n’ is the size of array.


