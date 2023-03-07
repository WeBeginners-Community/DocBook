# Hill Climbing Algorithm

Hill Climbing is a heuristic search method used in the field of Artificial Intelligence to solve mathematical optimization issues.

It attempts to discover a sufficiently excellent solution to the issue given a broad collection of inputs and a decent heuristic function. 

This answer may not be the most optimum one in the world.


### Features of Hill Climbing

#### 1) Variant of generating and test algorithm: 

It is a type of algorithm generation and testing. The following is the create and test algorithm:

- Create a list of potential solutions.
- Check to check whether this is the desired result.
- If the answer has been discovered, go to step 1, otherwise return to step 1.

As a result, we refer to Hill climbing as a version of the producing and testing algorithm since it incorporates feedback from the testing method. The generator then uses this feedback to determine the next move in the search space.

#### 2) Uses the Greedy approach: 
At every point in state space, the search advances solely in the direction that maximises the cost of function, with the intention of eventually discovering the best solution.

### Simple Hill climbing:

It examines the neighboring nodes one by one and selects the first neighboring node which optimizes the current cost as the next node. 

*Algorithm*
````
- Evaluate the initial state. If it is a goal state then stop and return success. Otherwise, make the initial state as the current state. 
- Loop until the solution state is found or there are no new operators present which can be applied to the current state. 
- Select a state that has not been yet applied to the current state and apply it to produce a new state. 
- Perform these to evaluate the new state.
- If the current state is a goal state, then stop and return success. 
- If it is better than the current state, then make it the current state and proceed further. 
- If it is not better than the current state, then continue in the loop until a solution is found. 
- Exit from the function.
````

### State Space diagram for Hill Climbing

The state-space diagram is a graphical representation of the set of states our search algorithm can reach vs the value of our objective function(the function which we wish to maximize). 

```` 
- X-axis: denotes the state space ie states or configuration our algorithm may reach. 
- Y-axis: denotes the values of objective function corresponding to a particular state. 
```` 

The best solution will be a state space where the objective function has a maximum value(global maximum). 


#### Problems in different regions in Hill climbing

Hill climbing cannot reach the optimal/best state(global maximum) if it enters any of the following regions :  

- Local maximum: At a local maximum all neighboring states have a value that is worse than the current state. Since hill-climbing uses a greedy approach, it will not move to the worse state and terminate itself. The process will end even though a better solution may exist. 

To overcome the local maximum problem: Utilize the backtracking technique. Maintain a list of visited states. If the search reaches an undesirable state, it can backtrack to the previous configuration and explore a new path.


- Plateau: On the plateau, all neighbors have the same value. Hence, it is not possible to select the best direction. 

To overcome plateaus: Make a big jump. Randomly select a state far away from the current state. Chances are that we will land in a non-plateau region.


- Ridge: Any point on a ridge can look like a peak because movement in all possible directions is downward. Hence the algorithm stops when it reaches this state. 

To overcome Ridge: In this kind of obstacle, use two or more rules before testing. It implies moving in several directions at once.
