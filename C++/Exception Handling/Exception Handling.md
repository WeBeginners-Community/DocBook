# Exception Handling in C++
Exception handling in c++ is a special condition for developers to handle. In programming, it is normal to commit mistakes that prompts unusual conditions called errors. All in all, these errors are of three kinds:

* Syntax Error
* Logical Error 
* Runtime Error

## What is Exception Handling?
Exception Handling in C++ is defined as a method that takes care of a surprising condition like runtime errors. 
To catch the exceptions, you place some segment of code under special case investigation and that is kept inside a” try-catch ” block.

## `try-catch` block
* Try – the try block recognises the code block for which certain exceptions will be enacted. It ought to be followed by one/more catch blocks.
* Catch – a program that utilises an exception handler to catch an Exception. It is added to the part of a program where you need to deal with the error.
```cpp
try 
{
   // the protected code
} 
catch( Exception_Name exception1 ) 
{
   // catch block
} 
catch( Exception_Name exception2 ) 
{
   // catch block
} 
catch( Exception_Name exceptionN ) 
{
   // catch block
}
```
## 'throw' keyword
The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
```cpp
try 
{
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () 
{
  // Block of code to handle errors
}
```

## System Defined Exceptions

<p align="center">

  <img src="https://user-images.githubusercontent.com/106819107/215486466-09dc40c5-5c9a-46fc-b677-06267342efdc.png" alt="Sublime's custom image"/>
  
</p>

|No.|Exception Name|
|:---|:---|
|1|std::exception|
||An exception and parent class of all the standard C++ exceptions.|
|2|std::bad_alloc|
||This can be thrown by new.|
|3|std::bad_cast|
||This can be thrown by dynamic_cast.|
|4|std::bad_exception|
||This is useful device to handle unexpected exceptions in a C++ program.|
|5|std::bad_typeid|
||This can be thrown by typeid.|
|6|std::logic_error|
||An exception that theoretically can be detected by reading the code.|
|7|std::domain_error|
||This is an exception thrown when a mathematically invalid domain is used.|
|8|std::invalid_argument|
||This is thrown due to invalid arguments.|
|9|std::length_error|
||This is thrown when a too big std::string is created.|
|10|std::out_of_range|
||This can be thrown by the 'at' method, for example a std::vector and std::bitset<>::operator[]().|
|11|std::runtime_error|
||An exception that theoretically cannot be detected by reading the code.|
|12|std::overflow_error|
||This is thrown if a mathematical overflow occurs.|
|13|std::range_error|
||This is occurred when you try to store a value which is out of range.|
|14|std::underflow_error|
||This is thrown if a mathematical underflow occurs.|


## User Defined Exceptions
There maybe situations where you want to generate some user/program specific exceptions which are not pre-defined in C++. In such cases C++ provided us with the mechanism to create our own exceptions by inheriting the exception class in C++ and overriding its functionality according to our needs.

### Example Input Code
```cpp
#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception //inheritance of exception class
{
	public:
    char * what () //function to return the exception type while throwing.
    {
      return "C++ Exception"; 
    }
};
 
int main() 
{
   try 
   {
      throw MyException(); //throw keyword to call exception
   }
   catch(MyException e) 
   {
      cout << "MyException caught" <<endl; 
      cout << e.what() <<endl; //print the type of user defined exception
   } 
   catch(exception e) 
   {
      //Other errors
   }
   return 0;
}
```

### Output Answer
``` 
MyException caught
C++ Exception
```