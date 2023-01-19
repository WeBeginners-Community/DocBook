# Reverse of a string using recursion in C++
```c
#include <iostream>
using namespace std;

void reverse(string str) {
    if (str.length() == 0) {
        return; //base case
    }
    cout << str[str.length()-1];
    reverse(str.substr(0, str.length()-1));  //recursive call
}

int main() {
    string s = "hello";
    reverse(s);
    return 0;
}
```

# Explanation of the above code
In this code, the function reverse() takes a string as input and recursively prints the last character of the string, followed by the last character of the substring that is the original string with the last character removed. This continues until the length of the substring is 0, at which point the recursion stops and the reversed string is printed.

In main function, you passed string s = "hello" and called reverse function with s, it will print "olleh"