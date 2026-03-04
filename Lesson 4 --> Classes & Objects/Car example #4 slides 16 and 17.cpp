/* 
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: Car Example #4
Date: 03/03/2026
*/


#include <iostream>
#include <string>


using namespace std;


class Car {

    private:

    string brand {"Volkswagen"};
    string model = "Polo";
    int year {2012};


    public:

      Car() {

      }

      Car(string b, string m, int y) {

        brand = b;
        model = m;
        year = y;
      }

      Car(const Car& other) {

        brand = other.brand;
        model = other.model;
        year = other.year;
      }

      ~Car() {    // destructor
        cout << "Object Destroyed" << endl;
      }


      void startEngine() {    
        cout << "start engine" << "brand: " << brand << "| Model: " << model << endl;
      }
      };




int main() {

    // default constructor
    Car car1;

    //parameterized constructor
    Car car2("Tesla", "X", 2022);

    //copy constructor
    Car car3(car2);


    car1.startEngine();
    car2.startEngine();
    car3.startEngine();


}

/*
Reflection:

1. What I understood:
I understood how the destructors work and that
it automatically runs when the object goes out of the
scope.

2. Difficulties:
I had a difficult time trying to figure out why my code
wasn't working at first. I never added the constructors to the
class and automatically thought that they were there when
I started in the "int main()." Once I added them, my code started
to run properly.

3. Research:
I looked up why destructors are automatically triggered and found
out that they do it to "prevent memory leaks."

4. AI Usage:
I used chatGPt to help me figure out what was wrong with my code
at first. It showed me that my constructors were missing in the class itself.

5. What I learned:
I learned that there;s something called constructor overloading, which
allows many constructors to be in one class, which allows
flexibility in allowing objects to be created in many ways.*/