/* 
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: Creating a Simple Class
Date: 03/03/2026
*/


#include <iostream>
#include <string>

using namespace std;


class Person {   // name of class

   // access type
    public:

    // data members
      string name;  
      int age;

        void greeting() {     // member function
            cout << "Nice to meet you! I'm " << name << ". I'm " << age << " years old." << endl;
        }

};




int main() {   // made for class to run

    Person philicia; // creating an object

    philicia.name = "Philicia";
    philicia.age= 19;

    philicia.greeting();  // calling the function
}



/*
Reflection:
1. What I understood:
I understood how important data organization is (type of encapsulation) 
and how dot operators work AFTER creating an object.

2. Difficulties:
I used the dot operator to make an object which gave me an error. I didn't realize that 
the dot wasn't used to make the objects but to get access to classes that the objects
are apart of.

3. Research:
I searched up when to use dot operators. It told me that its used for "direct member
access when working for an object", which made me realize that they weren't used to 
make the objects.

4. AI Usage:
I used ChatGPT to clarify how objects are supposed to look, which is structured as 
the name of the class and then the name of the object (whatever i decide to name it).

5. What I learned:
I learned how important it is to keep your data organized. This type of encapsulation is used
to help many read and maintain their codes easier which helped a lot instead of me trying to 
keep everything separate.*/