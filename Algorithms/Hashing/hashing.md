# HASHING
---
INTRODUCTION
--- 

* With binary search, certain data structures such as a binary search tree can help improve the efficiency of searches. 

* From linear search to binary search, we improved our search efficiency from O(n) to O(logn) .

* We now present a new data structure, called a hash table, that will increase our efficiency to O(1) , or constant time. 

* A hash table is made up of two parts: an array (the actual table where the data to be searched is stored) and a mapping function, known as a hash function. 

* The hash function is a mapping from the input space to the integer space that defines the indices of the array.

---
![My Image](https://static.javatpoint.com/ds/images/hash-table.png)

# Hashing Methods

* Direct Hashing
* Modulo Division Method
* Digit Extraction Method
* Midsquare Method
* Folding Method

---
![My Image](https://cdn.programiz.com/sites/tutorial2program/files/Hash-3_1.png)
---

# Linear Probing



In linear probing when data cannot stored in the home address or demanded address in the hash table then we resolve collision by adding 1 to the current address or place record linearly down whenever the empty location is found.


### Steps to obtain the hash table
Example of linear probing -
* Table Size = 7 .
* Hash Function - hash(key)= key%7 hash(key) = key%7 .
* Collision Resoulution Strategy - f(i)=if(i)=i.
* Insert - 16, 40, 27, 9, 75.

---

* Step 1 - Make an empty hash table of size 7.

![My Image](https://scaler.com/topics/images/empty-hash-table-of-size-7.webp)

* Step 2 - Inserting 16, 40 and 27.

```
hash(16)= 16%7= 2hash(16)= 16%7=2
hash(40)= 40%7= 5hash(40)= 40%7=5
hash(27)= 27%7= 6hash(27)= 27%7=6
```
![My Image](https://scaler.com/topics/images/hash-table-after-insertion.webp)

* Step 3 - Inserting 9 and 75.
```
hash(9)= 9%7= 2hash(9)= 9%7= 2 
```
But at index 2 already 16 is placed and hence collision occurs.
So we will probe for hash(9)+1 i.e. cell 3, since the next cell i.e. 3 is not occupied we place 9 in cell 3.
```
hash(75)= 75%7= 5hash(75)=75%7=5 
```
Again collision happens because 40 is already placed in cell 5. So we search for cell 66 which is also occupied then we will search for cell (hash(75)+2)%7 i.e. 0 which is empty so we will place 75 there.
After inserting 9 and 75 hash table will look like -

![My Image](https://scaler.com/topics/images/after-inserting-9-and-75-hash-table.webp)

---

## Pseudocode for operations

```
chainedHashSearch(T, k)
  return T[h(k)]
chainedHashInsert(T, x)
  T[h(x.key)] = x //insert at the head
chainedHashDelete(T, x)
  T[h(x.key)] = NIL
```

---
# Advantages:

* Searching in O(1) Time: Direct address tables use arrays which are random access data structure, so, the key values can be easily used to search the records in O(1) time.

* Insertion in O(1) Time: We can easily insert an element in an array in O(1) time.

* Deletion in O(1) Time: Deletion of an element takes O(1) time .
---
## Author

- [Archita Bhattad](https://github.com/ARCHITABHATTAD)
