# Create and Run TypeScript Program

TypeScript is a superset of JavaScript, so any valid JavaScript code is also valid TypeScript code. Here are the steps to create and run a basic TypeScript program:

## 1) Install TypeScript

Before you can create and run TypeScript programs, you need to have TypeScript installed on your system. Follow the steps in our "TypeScript Installation" guide to install TypeScript.

## 2) Create a TypeScript file

Create a new file with a ".ts" extension, for example "hello.ts". Open the file in your text editor and add the following code:

```sh
function sayHello(name: string) {
  console.log(`Hello, ${name}!`);
}

sayHello("TypeScript");
```

## 3) Compile the TypeScript file
Open your command prompt or terminal, navigate to the directory where your "hello.ts" file is saved, and run the following command:

```sh
tsc hello.ts
```

This will compile your TypeScript code into JavaScript code and create a new file called "hello.js".

## 4) Run the JavaScript file
You can now run the JavaScript file using Node.js. In your command prompt or terminal, run the following command:

```sh
node hello.js
```

This will execute the "hello.js" file and output the greeting to the console:

```Hello, TypeScript!```

#### Congratulations! You have created and run your first TypeScript program.
