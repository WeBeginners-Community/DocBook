# Palindrome checker using recursion in c++
```c
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    if (s.length() <= 1) {
        return true;
    }
    else if (s[0] != s[s.length() - 1]) {  //base case
        return false;
    }
    else {
        return isPalindrome(s.substr(1, s.length() - 2)); //Recursive Relation
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (isPalindrome(s)) {
        cout << s << " is a palindrome." << endl;
    }
    else {
        cout << s << " is not a palindrome." << endl;
    }
    return 0;
}

```
# Explanation
The program starts by including the necessary libraries, iostream and string, and then uses the std namespace.

Then, it defines a function isPalindrome(string s), which takes a single argument of type string and returns a boolean value. Inside the function, there are three cases that are handled:

If the length of the input string is less than or equal to 1, the function returns true. This is the base case of the recursion, where the string is considered a palindrome.
If the first character of the input string is not equal to the last character of the input string, the function returns false. This means that the string is not a palindrome.
If neither of the above two cases are true, the function calls itself with a substring of the input string. The substring is created by calling the substr() function, which takes two arguments: the starting index of the substring and the number of characters to include in the substring. In this case, the starting index is 1 (the second character of the string) and the number of characters is the length of the string minus 2 (to exclude the first and last characters, which have already been checked). The function then returns the value returned by the recursive call to isPalindrome().
The main function prompts the user to enter a string, and then calls the isPalindrome() function to check if the string is a palindrome. It passes the user input string as an argument to the function. The result of the function call is stored in a variable, and then the program checks whether the input string is a palindrome or not and prints the result to the user.

This program uses recursion to check whether a given string is a palindrome or not. It uses the idea that a string is a palindrome if its first and last characters are the same and the substring between them is also a palindrome. It starts with the first and last characters and checks if they are equal, if yes, it calls the function again with the substring between the first and last characters and continues the process until the string is empty or the first and last characters are not equal.