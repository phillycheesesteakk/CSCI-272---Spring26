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



/*
Reflection:

1. What I understood:
I understood that I needed to add a constructor in order for the code
to work. I ended up going with parameterized because it seemed the easiest
for me to make.

2. Difficulties:
I was so close to making this whole code myself which I'm very proud of but
I was missing something major which was a method to get the final total
for how much the bank account has.

3. Research:
I looked up the difference from -= and _= because I realized that
there was a typo in my code and from the example as well.

4. AI Usage:
I asked chatGPT if I was missing anything, which led me to finding
out about the missing method that I had to add in order for me to 
get the total.

5. What I learned:
I learned how to make deposit and withdraw methods, how to test
them on the main, and how to be more observant in what I'm missing or what
I could've typed wrong.*/