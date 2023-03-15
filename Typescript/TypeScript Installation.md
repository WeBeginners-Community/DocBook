# TypeScript Installation

TypeScript can be installed using Node Package Manager (npm) which is a package manager for the JavaScript programming language. Here are the steps to install TypeScript on your system:

## 1) Install Node.js

TypeScript requires Node.js to be installed on your system. If you don't have Node.js installed, you can download it from the official website [https://nodejs.org](https://nodejs.org). Follow the instructions for your specific operating system to install Node.js.

## 2) Install TypeScript

Once you have installed Node.js, you can use npm to install TypeScript. Open your command prompt or terminal and run the following command:

`npm install -g typescript`

This command will install the latest version of TypeScript globally on your system.

## 3) Verify Installation

To verify that TypeScript has been installed successfully, you can run the following command:

`tsc -v`

This command will display the version of TypeScript installed on your system. If you see a version number, then TypeScript has been installed successfully.

## 4) Configure TypeScript

By default, TypeScript compiler (tsc) generates JavaScript code with ES3 target. If you want to use a different target, you can configure the TypeScript compiler using a tsconfig.json file. Here is an example of a tsconfig.json file that specifies ES6 target:

```json
{
  "compilerOptions": {
    "target": "es6"
  }
}
```

This will compile your TypeScript code into JavaScript code and create a new file called "hello.js".

tsc

This will compile all TypeScript files in your project directory and generate JavaScript files.

Congratulations! You have successfully installed TypeScript on your system and are ready to start writing TypeScript code.

Note: The above code assumes that you are using a Unix-like operating system (e.g., Linux, macOS) or Git Bash on Windows. If you are using a different command prompt or terminal, the commands may be slightly different.
