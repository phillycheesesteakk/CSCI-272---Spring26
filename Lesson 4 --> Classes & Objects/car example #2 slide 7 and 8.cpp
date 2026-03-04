/*
Reflection:
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: Car Class Example #2
Date 03/03/2026
*/


#include <iostream>
#include <string>

using namespace std;


class Car {

    // access type: only available to this class (Car)
    private:

      string brand {"Volkswagen"};
      string model = "Polo";
      int yea {2012};


    public:

      void startEngine() {
        cout << "Start Engine" << endl;
      }

      void accelerate() {
        cout << "Accelerate Engine" << endl;
      }
};



int main() {
Car car1;

car1.startEngine();
car1.accelerate();

}


/* 
Reflection:

1. What I understood
I understood that the private access in classes cannot be used
from outside the class, until I didn't. Before I decided to keep 
my code like this, I added "brand" in the start engine function, 
just to see if it would work and it did which confused me for a while.
But after some time I realized how it still worked.

2. Difficulties:
I struggled with understanding how all the access types worked fully.
I thought the info in private types couldn't be used at all. 
But because the methods being used to run the code are still in
the class itself, it's allowed to access its private info, which totally makes
sense. I thought of this as a derived class or main trying to get access when it was the 
class itself all along.

3. Research:
I looked up how to understand the difference between all access types
and when they can be accessed, which gave me a way better understanding
on all, especially protected.

4. AI Usage:
I used ChatGPT to explain why the private members were still accessed
in simple terms.

5. What I learned:
I learned that it's very much possible to get access to private members once
the class itself is trying to access it.
*/


