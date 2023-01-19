# C++ while loop

A **while** loop statement repeatedly executes a target statement as long as a given condition is true.

### Syntax

```
while (condition) {
   statement(s);
}
```

Here, statement(s) may be a single statement or a block of statements. The condition may be any expression, 
and true is any non-zero value. The loop iterates while the condition is true.

When the condition becomes false, program control passes to the line immediately following the loop.

### Flow Diagram

<img src="https://user-images.githubusercontent.com/65494453/213434651-8ab677de-e246-4e10-998b-21e5eaeff4ba.png" width="40%" height="50%">

Here, key point of the while loop is that the loop might not ever run. When the condition is tested and the result is false, 
the loop body will be skipped and the first statement after the while loop will be executed.

### Example

```cpp
#include <iostream>
using namespace std;
 
int main () {
   // Local variable declaration:
   int a = 10;

   // while loop execution
   while( a < 20 ) {
      cout << "value of a: " << a << endl;
      a++;
   }
 
   return 0;
} 
```
When the above code is compiled and executed, it produces the following result −

![Capture](https://user-images.githubusercontent.com/65494453/213434056-794872f7-722f-440b-a431-2a02ea65f495.PNG)
