# What is Python?
**Python** is a simple and easy to understand language which feels like reading simple english. This Pseudo Code nature of python makes easy to learn and understandable by beginners.

# Features of Python
- Easy to understand.
- Less development time.
- Free and open source.
- High level language.
- Portable i.e. works on Linux/Windows/Mac.

# Printing Text
In Python, we use the **print** function to output text.
So to generate our message, the code would look like this: <br>
```
print('Hello world!')   // Output: Hello world!
```

# Data Types & Variables
## Data Types:
Each value in Python has a type.

- Text, like "Hello world", is called a **string**.
- Whole numbers are called **integers**. Example:- 5, 10, -2, 0
- And numbers with a decimal point are called **floats**. Example:- 7.6, 3.5, 6.0

## Variables:
A **variable** lets you store a value by assigning it to a name. The name can be used to refer to the value later in the program.

To assign a variable, use one equals sign
```
user = "James"  //now user variable contains the value James
```

Naming a variables is pretty flexible. We can use **letters**, **numbers**, and **underscores** in variable names. But we can’t use special symbols, or start the name with a number.

# Simple Operations
Doing a **calculation** in Python is simple, just enter it into the print statement: <br>
```
print(2 + 2)        //prints 4
print(5 + 4 - 3)    //prints 6
print(10 / 2)       //prints 5.0
print(2 * (3 + 4))  //prints 14
```

# Exponentiation
Exponentiation – which is what we call it when we raise one number to the **power** of another. The exponentiation operation is performed using two asterisks. <br>
Like this:
```
print(2 ** 5)       //prints 32 i.e. 2 to the power 5
print(9 ** (1/2))   //prints 3 i.e square root of 9
```

# Quotient & Remainder
## Quotient:
Floor division is done using **two forward slashes** and is used to determine the quotient of a division. Quotient just means the quantity produced by the division of two numbers.

And Floor division is just like a normal division operation except that it returns the largest possible integer. This integer is either less than or equal to the normal division result.

For example:
```
print(20 // 6)  //The code above will output 3, because 6 goes into 20 
                //three times, and is the largest possible integer.
```

## Remainder
We can use the **modulo operator** – which is carried out with a percent symbol **(%)** to get the remainder of a given division.

For example:
```
print(20 % 6)       //This will output 2
print(1.25 % 0.5)   //This will output 0.25
```
#Libraries in Python
Python has a rich set of standard libraries built into the language, which provide a wide range of functionality for tasks such as data manipulation, scientific computing, web development, and more. In addition to the standard libraries, there are also many third-party libraries available for Python that extend the language's capabilities even further. 

##Some popular Python libraries include:
NumPy: a library for numerical computing with arrays and matrices.
Pandas: a library for data analysis and manipulation.
Matplotlib: a library for creating static, animated, and interactive visualizations in Python.
SciPy: a library for scientific computing with advanced functions for optimization, integration, linear algebra, and more.
Scikit-learn: a machine learning library for building predictive models.
TensorFlow: a library for building and training deep neural networks.
Keras: a high-level neural networks API, written in Python and capable of running on top of TensorFlow, CNTK, or Theano.
Flask: a lightweight web framework for building web applications.
Django: a full-stack web framework for building complex web applications.
Requests: a library for making HTTP requests in Python.
