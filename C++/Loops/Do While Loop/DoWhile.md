## What is Do While Loop?

A "Do-while loop" is a type of loop in which the block of code within the loop is executed at least once, regardless of the initial value of the loop condition.

In contrast, a while loop and a for loop will only execute the code within the loop if the loop condition is initially true. The do-while loop is similar to the while loop, except that the loop condition is checked at the end of the loop rather than at the beginning. 

This means that the block of code within the do-while loop will always be executed at least once before the loop condition is evaluated.

## Syntax for using Do-While Loop 

do
{
    statements;
} while (test condition);

## Example of Do-While Loop

A do-while loop in C++ begins by executing the block of code within the loop at least once. After the first execution of the code, the loop condition is evaluated. If the condition is true, the code within the loop will be executed again. This process continues until the loop condition becomes false, at which point the loop will terminate and the program will move on to the next block of code. If the loop condition is initially false, the code within the loop will not be executed again and the loop will terminate immediately.

#include <iostream>
using namespace std;
 
int main()
{
    int i = 0;
do {
   cout << i << " ";
   i++;
} while (i < 5);
 
    return 0;
}

In this example, the loop will continue to execute as long as the value of the variable "i" is less than 5. The first time the loop is executed, the value of "i" is 0, so the condition "i < 5" is true and the loop continues. The value of "i" is then incremented by 1, and the loop condition is checked again. This process continues until the value of "i" becomes 5, at which point the loop condition is false and the loop terminates. The output of this loop will be the numbers 0 through 4, each separated by a space.

