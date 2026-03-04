/* 
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: Car Example #3
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

        Car() {    // default constructor
        }

        Car(string b, string m, int y) {    // parameterized constructor
            brand = b;
            model = m;
            year = y;
        }

        Car(const Car& other) {   // copy constructor
            brand = other.brand;
            model = other.model;
            year = other.year;
        }

        void startEngine() {
            cout << brand << " " << model << " " << year << " has started its engine." << endl;
        }
};


int main() {
    Car car1; // default constructor
    Car car2("Tesla", "X", 2022); // parameterized constructor
    Car car3(car2); // copy constructor
    Car* pCar1 = new Car; // default constructor
    Car* pCar2 = new Car("Tesla", "X", 2022); // parameterized constructor
    Car car[20];
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1->startEngine();
    pCar2->startEngine();
    car[0].startEngine();

}


/*
Reflection:

1. What I understood:
I understood how the default, parameterized, and copy
constructors are all different. Default can run when no values are given,
however, parameterized constructors can and copy constructors run
when they're creating a new object from another one.

2. Difficulties:
I had a problem trying to fully understand exactly how copy constructors work, especially on how the "other."
 inside of it.
 
 3. Research:
 I looked up how "other." worked in copy constructors and realized that
 it's a "referance to an existing source object."
 
 4. AI Usage:
 I used chatGPT to understand why (const Car& other) was being used
 and how.
 
 5. What I learned:
 I learned that when using (Const class_name& other), const helps the
 object from being changed and "&" is used as a reference.*/