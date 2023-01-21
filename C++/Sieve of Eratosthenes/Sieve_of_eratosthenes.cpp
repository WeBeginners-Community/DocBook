#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

bool isPrime[MAX];
void sieve_of_eratosthenes() {

     isPrime[0] = false;
     isPrime[1] = false;
     for(int i=2; i<MAX; i++) isPrime[i] = true;

     for(int i=2; i*i<=MAX/2; i++) {
          if(isPrime[i]) {
               for(int j=i*i; j<=MAX; j+=i) isPrime[j] = false;
          }
     }
}

int main() {
     
     sieve_of_eratosthenes();

     for(int i=0;i<10;i++) if(isPrime[i]) cout<<i<<' ';
     cout<<endl;

     return 0;
}