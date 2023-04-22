# A* Algorithm
A* Algorithm is one of the best techniques used for path finding and graph traversals.A lot of games and web-based maps use this algorithm for finding the shortest path efficiently.It is essentially a best first search algorithm.

## Working Steps:
Step1: Place the starting node in the OPEN list.

Step 2: Check if the OPEN list is empty or not, if the list is empty then return failure and stops.

Step 3: Select the node from the OPEN list which has the smallest value of evaluation function (g+h), if node n is goal node then return success and stop, otherwise

Step 4: Expand node n and generate all of its successors, and put n into the closed list. For each successor n', check whether n' is already in the OPEN or CLOSED list, if not then compute evaluation function for n' and place into Open list.

Step 5: Else if node n' is already in OPEN and CLOSED, then it should be attached to the back pointer which reflects the lowest g(n') value.

Step 6: Return to Step 2.

## Example:
![1](https://static.javatpoint.com/tutorial/ai/images/informed-search-algorithms4.png)

The above problem can be solved using A* Algorithm steps as mentioned above and the results will be as follows:

![2](https://static.javatpoint.com/tutorial/ai/images/informed-search-algorithms5.png)

So the result is S->A->C->G

## Time Complexity & Space Complexity
If we consider it as graph traversals, the time complexity will be O(E) where E is the edges of the graph. This is the worst case time complexity.

In terms of heuristic function, the time complexity is O(b^d) where b is branching factor and d is depth of the solution.

Space Complexity for the traversal is O(V) where V is the number of vertices.

Space Complexity in terms of branching factor and depth of the solution is O(b^d)

