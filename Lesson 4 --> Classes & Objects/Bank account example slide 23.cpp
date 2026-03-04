/* 
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: Bank Acoount Example
Date: 03/03/2026
*/


#include <iostream>
#include <string>

using namespace std;


class BankAccount {

    private:

      double balance;

      public:

      BankAccount(double b) {
        balance = b;
      }

        void deposit(double amount) {
           balance += amount;
        }

        void withdraw (double amount) {
            if (amount <= balance) {
              balance -= amount;
            }       
        }

        double getBalance() {
            return balance;
        }
};



int main() {
   
    BankAccount account1(2000);

    account1.deposit(364);

    account1.withdraw(125);

    cout << "Final Balance: $" << account1.getBalance() << endl;
}