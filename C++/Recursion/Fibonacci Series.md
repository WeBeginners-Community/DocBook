# Fibonacci series using recursion in c++
Here's an example of a C++ program that uses recursion to generate the Fibonacci series:
```c
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0; //exit case 1
    if (n == 1) return 1;//exit case 2
    return fibonacci(n-1) + fibonacci(n-2); //Recursive Relation
}

int main() {
    for (int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";  //only prints the first 10 numbers of the series
    }
    return 0;
}

```

This program defines a function fibonacci(n) that uses recursion to calculate the n-th Fibonacci number. The function first checks if n is less than or equal to 0, in which case it returns 0. If n is 1, it returns 1. Otherwise, it returns the sum of the (n-1)-th and (n-2)-th Fibonacci numbers. The main() function then calls the fibonacci() function for the first 10 Fibonacci numbers and prints them out.

Please note that this way of implementing fibonacci series is not efficient as it has exponential time complexity as it calls the function recursively multiple times for the same n.