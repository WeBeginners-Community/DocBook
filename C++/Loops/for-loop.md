# C++ for loop

A **for** loop is a control flow statement that is used to execute a piece of code based on the validity of some conditions. It makes the code execute repeatedly. 


### Syntax

```
 for ( Initial state ; Condition ; Updation ) {
    Body of loop;
}
```

A for loop has three parts. First is initialization or initial state, the second is the condition, and finally the updation. So let’s understand these three parts or expressions.

**Initialization**: Initialization or initial state initializes the starting value. In this part of the loop, you declare and initialize loop variables. It executes only once, during the starting of the for loop.

**Condition**: For every iteration of for loop, a condition is checked. If the condition is true, the loop will continue and the execution will jump to those statements that are after the loop body. Otherwise, the loop will end.

**Updation**: The updation step is used to update the loop variable. This step increments or decrements the loop counter.

### Flow Diagram

![for-loop-flow-chart-diagram](https://user-images.githubusercontent.com/65494453/213872107-68c20fc5-2e3d-41c1-bf53-440e15737c56.jpg)

### Example: Printing Numbers From 1 to 5

```cpp
#include <iostream>
using namespace std;

int main () {

  for (int i = 1; i <= 5; ++i) {
  cout << i << " ";
    }
    
  return 0;
}
```

### Output

    1 2 3 4 5
