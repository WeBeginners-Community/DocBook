# KMP Algorithm for Pattern Searching
## Problem Statement:-
Given a string txt and a string pat, write a function that prints all occurrences of pat in txt.

Examples:

```
Input:  string txt = “this is a test text”
        string pat = "test"
Output: Pattern found at index 10

Input:  string txt =  “aabaacaadaabaaba”
        string pat =  "aaba"
Output: Pattern found at index 0, Pattern found at index 9, Pattern found at index 12
```

## Implementation of KMP algorithm:
Unlike the Naive algorithm, where we slide the pattern by one and compare all characters at each shift, we use a value from lps[] to decide the next characters to be matched. The idea is to not match a character that we know will anyway match.

How to use lps[] to decide the next positions?

- We start the comparison of pat[j] with j = 0 with characters of the current window of text.
- We keep matching characters txt[i] and pat[j] and keep incrementing i and j while pat[j] and txt[i] keep **matching**.
- When we see a **mismatch**
    - We know that characters pat[0..j-1] match with txt[i-j…i-1].
    - We also know that lps[j-1] is the count of characters of pat[0…j-1] that are both proper prefix and suffix.
    - From the above two points, we can conclude that we do not need to match these lps[j-1] characters with txt[i-j…i-1] because we know that these characters will anyway match. Let us consider the above example to understand this.

Below is the illustration of the above algorithm:

```
string txt = “aaaaabaaaba” , string pat = "aaaa"
lps[] = {0, 1, 2, 3} 

i = 0, j = 0

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] match, do i++, j++

i = 1, j = 1

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] match, do i++, j++

i = 2, j = 2

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
pat[i] and pat[j] match, do i++, j++

i = 3, j = 3

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] match, do i++, j++

i = 4, j = 4

Since j == M, print pattern found and reset j,
j = lps[j-1] = lps[3] = 3

Here unlike Naive algorithm, we do not match first three characters of this window. 
Value of lps[j-1] (in above step) gave us index of next character to match.

i = 4, j = 3

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] match, do i++, j++

i = 5, j = 4

Since j == M, print pattern found and reset j, j = lps[j-1] = lps[3] = 3
Again unlike Naive algorithm, we do not match first three characters of this window. 
Value of lps[j-1] (in above step) gave us index of next character to match.

i = 5, j = 3

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] do NOT match and j > 0, change only j
j = lps[j-1] = lps[2] = 2

i = 5, j = 2

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] do NOT match and j > 0, change only j
j = lps[j-1] = lps[1] = 1 

i = 5, j = 1

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] do NOT match and j > 0, change only j
j = lps[j-1] = lps[0] = 0

i = 5, j = 0

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] do NOT match and j is 0, we do i++.

i = 6, j = 0

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] match, do i++ and j++

i = 7, j = 1

string txt = “aaaaabaaaba” 
pat[] = "aaaa"
txt[i] and pat[j] match, do i++ and j++

We continue this way till there are sufficient characters in the text to be compared with the characters in the pattern…
```

For implementation and code see the `KMP_Algorithm.cpp` file.