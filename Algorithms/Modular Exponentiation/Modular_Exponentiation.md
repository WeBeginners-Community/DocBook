# Modular Exponentiation
## Problem Statement
Given three numbers x, y and p, compute (x<sup>y</sup>) % p.

**Examples :**
```
Input:  x = 2, y = 3, p = 5
Output: 3
Explanation: 2^3 % 5 = 8 % 5 = 3.

Input:  x = 2, y = 5, p = 13
Output: 6
Explanation: 2^5 % 13 = 32 % 13 = 6.
```

**Approach:**

The problem with the naive solution is, overflow may occur for large values of y or x. Therefore, power is generally evaluated under the modulo of a large number.

Below is the fundamental modular property that is used for efficiently computing power under modular arithmetic. 

```
(ab) mod p = ( (a mod p) (b mod p) ) mod p 

For example a = 50,  b = 100, p = 13
50  mod 13  = 11
100 mod 13  = 9

(50 * 100) mod 13 = ( (50 mod 13) * (100 mod 13) ) mod 13 
or (5000) mod 13 = ( 11 * 9 ) mod 13
or 8 = 8
```

**Time Complexity:** O(log y), where y represents the value of the given input.

**Space Complexity:** O(1), as we are not using any extra space.