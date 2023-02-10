
# Sum of Subset Problem

The subset sum problem is a well-known problem in computer science and mathematics. 
It's a decision problem that asks if a given set of positive integers contains a subset that adds up to a given target sum.

Given a set of positive integers and a target sum, the goal is to determine whether there exists a subset of the given set that adds up to the target sum. The problem can be formalized as follows:

Input: 
* A set of positive integers S = {a1, a2, ..., an} and a target sum T.
Output: 
* YES if there exists a subset of S that adds up to T, and NO otherwise.

The subset sum problem is NP-complete, meaning that there is no known algorithm that can solve the problem in polynomial time for all inputs. Despite this, there are many algorithms for solving the subset sum problem, including brute force, backtracking, and dynamic programming. The choice of algorithm depends on the size of the input set, the target sum, and the desired trade-off between speed and memory usage.

# Backtracking 

Backtracking is a general algorithmic technique for finding all or some solutions to a problem incrementally by trying out partial solutions and abandoning a solution as soon as it is determined to be not feasible. 
This approach can be applied to the subset sum problem to find all subsets of a set that add up to a target sum.

## The problem statement for the subset sum problem using backtracking is as follows:

Given a set of positive integers and a target sum, find all subsets of the set that add up to the target sum.