Travelling Salesman Problem (TSP) 

Introduction :
Given a set of cities and the distance between every pair of cities as an adjacency matrix, 
the problem is to find the shortest possible route that visits every city exactly once and returns to the starting point.

Let’s take an example to understand the TSP in more detail:

![image](https://user-images.githubusercontent.com/98210740/217267966-a32bf3ab-38bf-4046-aeb1-a473a196c36c.png)
Here, the nodes represent cities, and the values in each edge denote the distance between one city to another.
Let’s assume a salesman starts the journey from the city A. According to TSP, the salesman needs to travel all the cities exactly once and get back to the city A by choosing the shortest path.
Here the shortest path means the sum of the distance between each city travelled by the salesman, and it should be less than any other path.
With only {5} cities, the problem already looks quite complex. As the graph in the example is a complete graph, from each city, the salesman can reach any other cities in the graph. From each city, the salesman needs to choose a route so that he doesn’t have to revisit any city, and the total distance travelled should be minimum.

Travelling Salesman Problem Example 1

![image](https://user-images.githubusercontent.com/98210740/217268448-be752b20-3c84-4065-81fc-369643adc4bc.png)

Output-

![image](https://user-images.githubusercontent.com/98210740/217268491-5fa1e518-bff4-4467-9817-4d12c18a3b8f.png)


Approach –
The implementation uses bit masks to keep track of visited cities in the memo table.
The solve method generates all possible combinations of bit sets of size n where r bits are set to one, solves the TSP for each combination, 
and caches the result. The getTour method returns the optimal tour for TSP, and the getTourCost method returns the minimum tour cost. 
Let’s first see the pseudocode of the dynamic approach of TSP, then we’ll discuss the steps in detail:

![image](https://user-images.githubusercontent.com/98210740/217268067-fe2a4d5e-5ac4-4154-aa1f-9ceab541a14f.png)
In this algorithm, we take a subset N of the required cities needs to be visited, distance among the cities dist and starting city s as inputs. Each city is identified by unique city id like {1, 2, 3,.... n}.

Initially, all cities are unvisited, and the visit starts from the city s. We assume that the initial travelling cost is equal to \mathsf{0}. Next, the TSP distance value is calculated based on a recursive function. If the number of cities in the subset is two, then the recursive function returns their distance as a base case.

On the other hand, if the number of cities is greater than \mathsf{2}, then we’ll calculate the distance from the current city to the nearest city, and the minimum distance among the remaining cities is calculated recursively.

Finally, the algorithm returns the minimum distance as a TSP solution.

Here we use a dynamic approach to calculate the cost function  {Cost()}. Using recursive calls, we calculate the cost function for each subset of the original problem.

 Time Complexity Analysis:
 
 In the dynamic algorithm for TSP, the number of possible subsets can be at most N x 2^N. Each subset can be solved in O(N) times.
 Therefore, the time complexity of this algorithm would be O(N^2 x 2^N).
