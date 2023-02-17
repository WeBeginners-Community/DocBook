# PROBLEM :

The first line of input consists of the first prime number and the second line is for the second prime number and the third line consists of the GCD of number
and the last line consist of the message to be encrypted.

    INPUT :-  23            --> First number

              17            --> Second number

              211           --> GCD of chosen number

              Dharnish38    --> Message to be encrypted

    OUTPUT :- 6 183 97 420 222 315 172 183 74 -52   --> Encrypted message

              Dharnish38                            --> Decrypted message
             
 # RSA CRYPTOGRAPHY :
 
  --> Rivest Shamir Adleman (RSA) cryptography algorithm
  
  --> It s an asymmetric cryptography algorithm
  
  --> Asymmetric actually means that it works on two different keys i.e. Public key and Private key
  
  Example:

          1) A client (for example a browser) sends its public key to the server and requests some data.

          2) The server encrypts the data using the client’s public key and sends the encrypted data.

          3) The client receives this data and decrypts it.
          
![RSA](https://user-images.githubusercontent.com/122768878/219620638-c75d8a78-879d-4fc3-9988-5dbaba1907ea.png)

# RSA ALGORITHM :

  1) Select two large prime numbers p and q.
    
  2) Multiply these numbers to find n = p x q, where n is called the modulus for encryption and decryption.
    
  3) Choose a number e less than n, such that n is relatively prime to (p - 1) x (q -1).It means that e and (p - 1) x (q - 1) have no common factor.
    
  4) Choose "e" such that 1<e < φ (n), e is prime to φ (n),
    
                                      gcd (e,d(n)) =1
                                      
  5) If n = p x q, then the public key is <e, n>. A plaintext message m is encrypted using a public key <e, n>.
     To find ciphertext from the plain text following formula is used to get ciphertext C.
       
                                      C = me mod n
                                      
     Here, m must be less than n. A larger message (>n) is treated as a concatenation of messages, each of which is encrypted separately.
       
  6) To determine the private key, we use the following formula to calculate the d such that:
    
                                    de mod {(p - 1) x (q - 1)} = 1
                                                Or
                                        de mod φ (n) = 1
                                        
  7) The private key is <d, n>. A ciphertext message c is decrypted using a private key <d, n>.
 
  8) To calculate plain text m from the ciphertext c following formula is used to get plain text m.
                                          
                                          m = cd mod n
                               
# COMPLEXITIES :

  Time Complexity  :- BigO(n^3)
  
  Space Complexity :- BigO(n)
