/* 
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: Person Class
Date: 03/03/2026
*/

#include <iostream>
#include <string>

using namespace std;


class Person {
     
    public:

     string name {"Maksi"};
     int age {29};
     char gender {'M'};

     public:

       void introduce() {

          cout << "Hello, I'm " << name << ". I'm " << age << " years old." << endl;

        if (gender == 'M') {
          cout << "I'm a Male." << endl;
        }

        else if (gender == 'F') {
            cout << " I'm a Female." << endl;
        }

        else {
            cout << " Gender unspecified." << endl;
        }
       }
};



int main() {

    Person person1;

    person1.introduce();

}


/*
Reflection:

1. What I understood:
I understood that not all methods/functions need parameters.

2. Difficulties:
I didn't have any major difficulties. The example was pretty 
straightforward to me. I see how the class members and 
methods work together.

3. Research:
I looked up for info on the term when values are assigned when
no constructor is written to find out that it's called default
initialization.

4. AI Usage:
I didn't use any AI for this example. Just followed the lecture slides.


5. What I learned:
I learned that there's more ways to start a method
besides adding parameters. In this example, if else statements were used.
 */