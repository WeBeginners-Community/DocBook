## What is While Loop?

A while loop is a control structure that allows you to execute a block of code repeatedly as long as a certain condition is true. It is called a pre-tested loop because the test condition is evaluated before the loop body is executed. While loops are often used when the number of iterations is not known in advance, as opposed to for loops which are used when the number of iterations is known.

## Syntax of a For-Loop

Following is the syntax for using a while loop.

while (condition test)
{
    // Set of statements
}

A while loop repeatedly executes a block of code as long as a test condition is true. It consists of a test condition and a loop body. When the test condition becomes false, the loop terminates. The loop body can contain a single statement or a block of statements, and the test condition can be any expression that evaluates as either true or false.

## Example of For-Loop

One such example to demonstrate how a while loop works is

#include <iostream>
using namespace std;
 
int main()
{
    int i = 2;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }
 
    return 0;
}

Output

2 3 4 5 6 7 8 9
