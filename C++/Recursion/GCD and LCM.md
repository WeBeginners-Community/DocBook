 # GCD and LCM
 
We are given two numbers. We need to find there greatest common divisor (GCD) and least common divisor (LCM).

### Sample Input
```
a=4 , b=8
```
### Sample Output
```
GCD = 4
LCM = 8
```

### Solution
```cpp
 #include<bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
using namespace std;

// RECURSION 
int gcd(int a ,int b)
{
    /* base condition*/ 
    if(b==0) return a;
    return gcd (b,a%b );
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b)<<endl;

/* EXPLAIN->*/
/* gcd(12,18) and gcd(18,12) means same .

 /* cout<<gcd(1,0)<<endl;
    cout<<gcd(2,8)<<endl;
    cout<<gcd(12,120)<<endl;
    cout<<gcd(11,110)<<endl;*/


// GCD INBUILT FUNCTION-

cout << __gcd(a,b) << endl;  /* ----> T.c -> O(logn)*/
//cout << boost::math::lcm (a,b) << endl;  /* ----> INBUILT */

/* For 3 no. --> gcd(gcd(a,b) , c)*/
/* MINIMUM FRACTION application of gcd*/

    return 0;
}
```
