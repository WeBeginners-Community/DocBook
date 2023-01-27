# Hare & Tortoise algorithm

The Fast & Slow pointer approach, also known as the Hare & Tortoise algorithm, is a pointer algorithm that uses two pointers which move through the array (or sequence/LinkedList) at different speeds. This approach is quite useful when dealing with cyclic LinkedLists or arrays.

By moving at different speeds (say, in a cyclic LinkedList), the algorithm proves that the two pointers are bound to meet. The fast pointer should catch the slow pointer once both the pointers are in a cyclic loop.

One of the famous problems solved using this technique was Finding a cycle in a LinkedList.


# How Does Floyd’s Cycle Finding Algorithm Works?

While traversing the linked list one of these things will occur-

- The Fast pointer may reach the end (NULL) this shows that there is no loop in the linked list.

- The Fast pointer again catches the slow pointer at some time therefore a loop exists in the linked list.

# Example 



# Pseudocode:

> Initialize two-pointers and start traversing the linked list.
> Move the slow pointer by one position.
> Move the fast pointer by two positions.
> If both pointers meet at some point then a loop exists and if the fast pointer meets the end position then no loop exists.