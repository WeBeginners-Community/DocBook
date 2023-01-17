# Factorial using recursion
Here is an example of a recursive program in C++ that calculates the factorial of a given number:
```c
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {  //base case
        return 1;
    }
    else {
        return n * factorial(n-1); //recursive relation
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The factorial of " << num << " is " << factorial(num) << endl; //function call
    return 0;
}

```
# Explanation
The program calculates the factorial of a given number using a recursive function in C++. The factorial of a number is the product of all positive integers less than or equal to that number. For example, the factorial of 5 is 5 x 4 x 3 x 2 x 1, which is 120.

The program starts with including the input/output library, and then defines the factorial function which takes an integer as an argument. The function starts with an if statement that checks whether the input number is equal to 0. If it is, the function returns 1, as the factorial of 0 is 1. This is called the base case of the recursion, which means that it is the stopping point for the recursion.

If the input number is not equal to 0, the function calls itself with the input number decremented by 1. This is the recursive step, where the function calls itself with a modified input until it reaches the base case. The value returned by the function call inside the else block is used to calculate the final factorial value by multiplying it with the input number.

Then in the main function, it takes an input from the user and stores it in a variable num. Then the factorial function is called by passing this variable as an argument. The returned value is then printed to the console.

The recursive function solves the factorial problem by breaking it down into simpler subproblems, where each subproblem is solving the factorial of a smaller number. It keeps calling itself with smaller and smaller numbers until it reaches the base case, where it returns the result, and all the previous function calls return their results by multiplying it with the input number.