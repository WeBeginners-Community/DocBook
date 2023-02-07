# Hare & Tortoise algorithm

The Fast & Slow pointer approach, also known as the Hare & Tortoise algorithm, is a pointer algorithm that uses two pointers which move through the array (or sequence/LinkedList) at different speeds. This approach is quite useful when dealing with cyclic LinkedLists or arrays.

By moving at different speeds (say, in a cyclic LinkedList), the algorithm proves that the two pointers are bound to meet. The fast pointer should catch the slow pointer once both the pointers are in a cyclic loop.

One of the famous problems solved using this technique was Finding a cycle in a LinkedList.


# How Does Floyd’s Cycle Finding Algorithm Works?

While traversing the linked list one of these things will occur-

- The Fast pointer may reach the end (NULL) this shows that there is no loop in the linked list.

- The Fast pointer again catches the slow pointer at some time therefore a loop exists in the linked list.

# Example 
![Untitled](https://user-images.githubusercontent.com/72097380/215008921-5ed20030-986d-4031-9785-8730e7b999da.png)



# Pseudocode:

- Initialize two-pointers and start traversing the linked list.
- Move the slow pointer by one position.
- Move the fast pointer by two positions.
- If both pointers meet at some point then a loop exists and if the fast pointer meets the end position then no loop exists.


# Problem : Start of LinkedList Cycle

Given the head of a Singly LinkedList that contains a cycle, write a function to find the starting node of the cycle.

# Algorithm :
 
 If we know the length of the LinkedList cycle, we can find the start of the cycle through the following steps:

- Take two pointers. Let’s call them pointer1 and pointer2.
- Initialize both pointers to point to the start of the LinkedList.
- We can find the length of the LinkedList cycle using the approach discussed in Length of LinkedList Cycle. Let’s assume that the length of the cycle is ‘K’ nodes.
- Move pointer2 ahead by ‘K’ nodes.
- Now, keep incrementing pointer1 and pointer2 until they both meet.
- Imagine the cycle as a circular track: As pointer2 is ‘K’ nodes ahead of pointer1, which means, pointer2 must have completed one loop in the cycle when both pointers   meet. Their meeting point will be the start of the cycle.
- if pointer2 is ‘K’ nodes ahead of pointer1, it means that when pointer1 will be at the start of the cycle, pointer2 two will be at the end - they are the same node
