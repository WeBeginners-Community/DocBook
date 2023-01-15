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

# Simple Input and Output
In Python, we can use the **input()** function to get user input from the keyboard.

The input() function takes one parameter: the prompt message. This message is displayed to the user and then the user can enter their value.

For example:
```
name = input('Please enter your name: ') //By default input() function assumes input as string type
print('Hello ' + name + ', Welcome to Python!')
```

This code will first display a prompt message asking the user to enter their name. Then it will store the entered value in the name variable and finally it will print out a greeting message.

The output of this code would be something like this:
```
Please enter your name: John
Hello John, Welcome to Python!
```

Another thing to know here is,

The int() function can be used to convert user input (from the input() function) into an integer.

For example:
```
num = int(input('Please enter a number: '))
print(num + 5)
```

This code will first display a prompt message asking the user to enter a number. Then it will convert the entered value into an integer and store it in the num variable. Finally it will print out the number plus 5.

The output of this code would be something like this:
```
Please enter a number: 10
15
```
