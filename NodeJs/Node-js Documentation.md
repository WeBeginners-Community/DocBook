# Node.Js
Node.js is an open source server environment this allows us to run JavaScript on the server.
## why Node.js?

**Node.js uses asynchronous programming**

**NodeJS is a runtime environment that runs on Chrome's V8 Engine <small>(V8 is Google’s open source high-performance JavaScript and WebAssembly engine, written in C++. It is used in Chrome and in Node.js, among others i.e. it parses and executes JavaScript code)</small>**

**Running JavaScript outside DOM Content is Node.js**

A common task for a web server can be to open a file on the server and return the content to the client.

* A Node.js app runs in a single process, without creating a new thread for every request. 

* Node.js provides a set of asynchronous I/O primitives in its standard library that prevent JavaScript code from blocking and generally, libraries in Node.js are written using non-blocking paradigms, making blocking behavior the exception rather than the norm, which is very memory efficient.

* Ready to handle the next request.

* When the file system has opened and read the file, the server returns the content to the client.

* Node.js eliminates the waiting, and simply continues with the next request.

**While the other server sites such as PHP or ASP handles a file request:**
1. Sends the task to the computer's file system.
2. Waits while the file system opens and reads the file.
3. Returns the content to the client.
4. Ready to handle the next request.

# Install Node.js
## On Windows :
1. Download the Windows installer from the [Nodes.js® web site](https://nodejs.org/en/). 
2. Choose the LTS version that’s shown on the left. 

3. Run the installer (the .msi file you downloaded in the previous step.)

4. Follow the prompts in the installer (Accept the license agreement, click the NEXT button a bunch of times and accept the default installation settings).
5. Confirm that Node has been installed successfully on your computer by opening a Hyper terminal and typing in the commands ```node --version```

6. You should see the version of node you just installed.

### ***OR***
1. Vist this Github page [nvm Windows](https://github.com/coreybutler/nvm-windows).
2. click on `Download now!` and download the [nvm-setup.zip](https://github.com/coreybutler/nvm-windows/releases/download/1.1.10/nvm-setup.zip)
3. Follow the instructions and install it.
4. Open your favourite terminal and run the following commands :
    
    * `nvm`
    * `nvm list available`
    * `nvm install "LST(The latest version Eg:- 18.13.0.)"`
    * `nvm use "LST(The latest version Eg:- 18.13.0.)"`
    * click yes
    * To check the installation type `node --version` and Boom!!

## REPL Environment

The Node.js or node come bundled with REPL environment. Each part of the REPL environment has a specific work.

Read: It reads user's input; parse the input into JavaScript data-structure and stores in memory.

Evaluation: It takes and evaluates the data structure.

Print: It prints the result.

Loop: It loops the above command until user press `ctrl-c` ***twice*** or types `.exit`.

We can start **REPL** by simply running "`node`" on the Terminal. 

See this:


![](https://user-images.githubusercontent.com/104223444/212406018-2e483091-0e15-4e59-b7fa-1fe654a5f016.jpg)

Now we can execute various mathematical operations on REPL Node.js 

like eg:- `console.log("Hello Node.js");` and hit enter the this code executes straight away i.e. printing "Hello Node.js".

![](https://user-images.githubusercontent.com/104223444/212406517-e33715c4-595c-4436-861f-31ccd33bf5f2.jpg)


Now we can try with any mathematical, or any multiline expressions for the evaluation.

## Node.js REPL Commands

|Commands|Description|
|--------|------------|
|`ctrl + c`|It is used to terminate the current command.|
|`ctrl + c twice` or `ctrl+d`|	It terminates the node repl.|
|`.clear`|It is used to exit from multi-line expressions.|
|`.break`|It is used to exit from multi-line expressions.|
|`.save filename`	|It saves current node repl session to a file.|
|`.load filename`|It is used to load file content in current node repl session.|
