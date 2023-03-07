# Types in TypeScript

TypeScript is a language that allows for different types of values, providing data types to transform JavaScript into a strongly typed programming language. Unlike JavaScript, TypeScript supports data types, making it possible to use this feature in JavaScript with TypeScript's help. This is especially important for object-oriented programmers who want to use types in their scripting or object-oriented programming language. The Type System in TypeScript checks the validity of values before the program uses them, ensuring that the code functions as intended. We can classify the TypeScript data type into three types Static, Generics and Decorators.

## Static types

TypeScript is a statically typed language, which means that variable types are known at compile time. This can help catch errors before the code is even run. Here's an example of how to declare a static variable:

```typescript
let message: string = "Hello, TypeScript!";
```
In this example, the variable "message" is declared as a string, which means that it can only hold string values.

Static types can be further divided into two sub-categories:

## 1) Built-in types
TypeScript has several built-in data types that are similar to those in JavaScript. These include:

- `number`: for numeric values
- `string`: for text values
- `boolean`: for true/false values
- `object`: for complex data structures
- `null` and undefined: for absence of a value

Here's an example of how to use these data types:

```sh
```typescript
let age: number = 30;
let name: string = "John";
let isStudent: boolean = true;
let person: object = { name: "John", age: 30 };
let someValue: null = null;
let anotherValue: undefined = undefined;
```

## 2) User-defined types
TypeScript also allows you to define custom data types using classes, interfaces, and enums. Here are some examples:

#### a) Classes
Classes in TypeScript are a way to create reusable components that act as templates for creating objects. They are logical entities that store variables and functions for performing operations. TypeScript inherits support for classes from ES6. Unlike interfaces, classes have an implementation inside them, allowing them to define and encapsulate functionality.

```sh
class Person {
  name: string;
  age: number;

  constructor(name: string, age: number) {
    this.name = name;
    this.age = age;
  }

  greet() {
    console.log(`Hello, my name is ${this.name} and I am ${this.age} years old.`);
  }
}

const john = new Person("John", 25);
john.greet();

```

In this example, we define a Person class with two properties (name and age), a constructor that initializes these properties, and a greet() method that logs a message to the console. We then create a new instance of the Person class with the new keyword, passing in values for the name and age properties. Finally, we call the greet() method on the john instance, which outputs the following message to the console:

```
Hello, my name is John and I am 25 years old.
```

#### b) Interfaces

In TypeScript, an interface is a structure that acts as a contract within our application. It defines the syntax for classes to follow, meaning that any class that implements an interface is required to implement all of its members. While an interface cannot be instantiated on its own, it can be referenced by a class that implements it. The TypeScript compiler uses interfaces for type-checking, which is also referred to as 'duck typing' or 'structural subtyping'.

```sh
interface Person {
  firstName: string;
  lastName: string;
  age: number;
  greet: (message: string) => void;
}

class Employee implements Person {
  firstName: string;
  lastName: string;
  age: number;

  constructor(firstName: string, lastName: string, age: number) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
  }

  greet(message: string) {
    console.log(`${message}, my name is ${this.firstName} ${this.lastName} and I'm ${this.age} years old.`);
  }
}

const employee1 = new Employee("John", "Doe", 30);
employee1.greet("Hello"); // Output: Hello, my name is John Doe and I'm 30 years old.

```

In the example above, we defined an interface Person with properties firstName, lastName, age, and a method greet. We then created a class Employee that implements the Person interface. The Employee class has a constructor that takes in firstName, lastName, and age parameters, and sets them to its instance properties. It also implements the greet method, which logs a message to the console. Finally, we created an instance of the Employee class and called its greet method, which outputs the message:
```
Hello, my name is John Doe and I'm 30 years old.
```

### c) Enums
Enums in TypeScript define a set of named constants, which can be either string-based or numeric-based. By default, enums in TypeScript start numbering their elements from 0. However, we can manually set the value of any element to a specific number if we want to change this. TypeScript inherits support for enums from ES6

```sh
// Define an enum named "Colors" with string values
enum Colors {
  Red = "red",
  Green = "green",
  Blue = "blue"
}

// Declare a function that takes a Colors enum as parameter
function printColor(color: Colors): void {
  console.log(`The selected color is ${color}`);
}

// Call the function with an enum value
printColor(Colors.Green);
```

In this example, we defined an enum named Colors with three string values: Red, Green, and Blue. We then declared a function printColor that takes a parameter of the Colors enum type. Inside the function, we log the selected color to the console.

Finally, we call the printColor function with the Colors.Green value. The output of this program is:
```
The selected color is green
```
