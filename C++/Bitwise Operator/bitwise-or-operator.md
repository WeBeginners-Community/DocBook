# Bitwise OR operator: `|`

## Syntax

*`or-expression`*:\
&emsp; *`equality-expression`*\
&emsp; *`and-expression`* **`|`** *`equality-expression`*

## Remarks

The bitwise inclusive OR operator (**`|`**) compares each bit of its first operand to the corresponding bit of its second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the corresponding result bit is set to 0.

## Operator keyword for `|`

C++ specifies **`bitor`** as an alternative spelling for **`|`**. In C, the alternative spelling is provided as a macro in the <iso646.h> header. In C++, the alternative spelling is a keyword; use of <iso646.h> or the C++ equivalent <ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

## Example

```cpp
// Demonstrate bitwise OR
#include <iostream>
using namespace std;
int main() {
   int a = 5;      // pattern 00000101
   int b = 9;      // pattern 00001001

   cout << ( a | b ) << endl;   // prints "13", pattern 1101
}
```
