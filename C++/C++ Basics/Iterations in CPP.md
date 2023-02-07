# Data Abstraction in CPP
Data abstraction in C++ is a fundamental concept in object-oriented programming, and it enables the user to focus on the functionality of the class, rather than its implementation. By providing a simplified, user-friendly interface, data abstraction allows for a more modular, maintainable, and reusable code.

One of the key ways to achieve data abstraction in C++ is through the use of classes and objects. A class is a blueprint for an object, which consists of data members (also known as attributes or properties) and member functions (also known as methods). The data members represent the state of the object, while the member functions define its behavior.

The class can be designed to include a public interface and a private implementation. The public interface consists of the member functions and data members that are accessible to the user. These are the functions and data members that the user can use to interact with the object. On the other hand, the private implementation consists of the data members and member functions that are not accessible to the user. These are the implementation details of the class, such as the algorithms used in the member functions or the data structures used to store the data members.

By keeping the implementation details hidden from the user, the user can focus on using the class without needing to know how it is implemented. This also allows for more flexibility in the implementation, as the user does not need to be aware of any changes made to the private implementation. Additionally, this allows for better encapsulation, as the data members and member functions are protected from external modification, ensuring that the object is always in a consistent state.

In summary, data abstraction in C++ is a way of hiding the implementation details of a class, and exposing only a simplified, user-friendly interface. This allows for more modular, maintainable, and reusable code, and enables the user to focus on the functionality of the class rather than its implementation.

```c
class BankAccount {
  private:
    int accountNumber;
    double balance;

  public:
    BankAccount(int accountNumber) {
      this->accountNumber = accountNumber;
      this->balance = 0;
    }

    void deposit(double amount) {
      this->balance += amount;
    }

    void withdraw(double amount) {
      if (amount <= this->balance) {
        this->balance -= amount;
      } else {
        cout << "Insufficient funds." << endl;
      }
    }

    double getBalance() {
      return this->balance;
    }
};
```
In this example, the class BankAccount represents a bank account with a unique account number and a balance. The class has a private data member accountNumber and balance which are not accessible from outside the class. The class also has three public member functions deposit(), withdraw() and getBalance() which are accessible from outside the class.

The deposit() function allows the user to deposit money into the account, the withdraw() function allows the user to withdraw money from the account, and the getBalance() function allows the user to check the current balance of the account.

By using data abstraction, the user does not need to know the implementation details of how the balance is stored or how the deposit and withdraw functions work. The user can simply use the public interface to deposit and withdraw money and check the balance, without having to worry about the underlying implementation.

For instance, the user can create an object of BankAccount and use its public interface like this :
```c
BankAccount myAccount(123456);
myAccount.deposit(1000);
cout << "Current balance: " << myAccount.getBalance() << endl;
myAccount.withdraw(500);
cout << "Current balance: " << myAccount.getBalance() << endl;
```

Output :
```c
Current balance: 1000
Current balance: 500
```

In this example, the user can perform bank transactions without knowing the internal workings of the bank account, such as how the balance is stored or how the deposit and withdraw functions update the balance. This allows for a simplified, user-friendly interface and better encapsulation, which leads to more maintainable and reusable code.

