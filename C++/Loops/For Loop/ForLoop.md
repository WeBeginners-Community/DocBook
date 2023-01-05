## What is For-Loop?

A for loop is a type of loop that allows you to iterate over a sequence of elements, such as a list or a string. It consists of a loop header and a loop body. The loop header specifies the iteration variable and the sequence that you want to iterate over, and the loop body contains the code that you want to execute for each iteration.

## Syntax of a For-Loop

Here is the syntax of a for loop in C++ programming.

for (initialise counter; test counter; increment / decrement counter)
{
    //set of statements
}

A For-loop consists of three parts: 
the initialize counter statement, the test counter statement, and the increment/decrement counter statement. 

The initialize counter statement sets the initial value of the loop counter. 

The test counter statement is a boolean expression that determines whether the loop should continue or terminate. If the test counter statement evaluates to true, the loop continues and the set of statements in the loop body is executed. If the test counter statement evaluates to false, the loop terminates.

The increment/decrement counter statement increases or decreases the value of the loop counter after each iteration. The set of statements is the block of code that is executed for each iteration of the loop.


## Example of For-Loop

#include <iostream>
using namespace std;
 
int main()
{
    int num = 5;
    int i;
    for (i = 0; i < num; i++)
    {
        cout << i << " ";
    }
    return 0;
}

Output:

0 1 2 3 4 


The For-loop begins by executing the initialization expression, which initializes the loop variables. In this case, the expression i = 0 is executed once when the loop starts. The loop then checks the condition i < num. If the condition is true, the statements inside the loop body are executed. After the statements in the loop body are executed, the value of i is incremented by 1. This process continues until the value of i becomes greater than num, at which point the condition i < num becomes false and the loop terminates.