# High Level Overview of Javascript

As we saw in the first few articles in Fundamentals of JavaScript that "Javascript is a high-level, object-oriented, multi-paradigm programming language".

"JavaScript is a high-level, prototype-based object-oriented, multi-paradigm, interpreted or just-in time compiled, dynamic, single-threaded, garbage collected programming language with first-class functions and non-blocking event loop concurrency model."

The above definition contains all the important characteristics of javascript.

## Let's look at them one by one

1. High-level: You already know every program need hardware resources to run on a machine.Low-level languages like C, developer have to manage resources manually but in high-level programming languages like JavaScript or Python there is an abstraction that do this work but downside is they are not very fast compared to C.
2. Garbage collection: An algorithm inside JavaScript engine which automatically removes old unused objects from computer memory.
3. Interpreted or just-in time compiled: Every program in the end compile to 0/1 i.e., machine code. But programming languages have abstract to write this machine code in human readable format, then they are compiled or interpreted to machine code.
4. Multi-paradigm: Paradigm is an approach and mindset of structuring code. Three popular paradigm are:
   1. Procedural programming
   2. Object-oriented programming
   3. Functional programming

    There are one more classification6 that is imperative vs declarative. JavaScript supports all this paradigms.
5. Prototype-based object-oriented: As we have already seen, everything in javascript is an object. Data structures like arrays take its methods from an array blueprint like "Array.prototype" and take methods like push, pop,etc.
6. First-class functions:In javascript, function are treated as regular variables.
7. Dynamic: JavaScript is a dynamically typed language i.e, we don't assign data type to variables and they are interpreted as when declared, also type can be changed easily.
8. Single-threaded: Javascript can run only one thread at a time, that it can only do one thing at a time
9. Non-blocking event loop: If long running tasks are there it would block the thread, so to get non-blocking behavior javascript uses event loop which take long running tasks put them in background until they are finished and then.

> NOTE: All the above explanation are the simplified, in latter articles we will see a more detailed explanation about them.

