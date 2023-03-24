# Branch and Bound Algorithm

Branch and bind is a method of designing algorithms that is commonly used to solve combinatorial optimization issues. 

In the worst-case scenario, these issues are often exponential in terms of time complexity and may need examining all potential permutations. 

These issues are solved rather rapidly using the Branch and Bound Algorithm approach.

### When to use this Algo?

The BnB method is a fantastic addition to a company's problem-solving armory, particularly when branch and bound considers all options in the worst-case scenario. It is also used in cases where a mix of activities has to be optimised. Let us look at a few scenarios when B&B might be an excellent choice:

1) Discrete Optimization: 

Discrete optimization is a subset of optimization in which the variables of a given problem, such as network flow concerns, must belong to a discrete set. The BnB algorithm is a good choice in these cases.

2) Combinatory Optimization: 

After an optimization issue has been identified, combinatory optimization determines the maximum and lowest limits of the provided function. The process domain must be distinct or detached and substantial.


## 0/1 Knapsack using Branch and Bound


### Pseudo code
````
function knapsack(items, max_weight):
 best_value = 0
 queue = [{items: [], value: 0, weight: 0}]
 while queue is not empty:
   node = queue.pop()
   if node is a leaf node:
     update best_value if necessary
   else:
     for each remaining item:
       child = create child node for item
       if child is promising:
         queue.append(child)
 return best_value

function is_promising(node, max_weight, best_value):
 if node.weight > max_weight:
   return False
 if node.value + bound(node.items) < best_value:
   return False
 return True
 ````

 #### Time Complexity: O(N), as only one path through the tree will have to be traversed in the beat case and its worst time complexity is still given as O(2N) .