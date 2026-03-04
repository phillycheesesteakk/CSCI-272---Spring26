/*
Reflection:
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: Car Class Example #1
Date 03/03/2026
*/


#include <iostream>
#include <string>

using namespace std; 

class Car {
    
    private:
      string brand;
      string model;
      int year;

    public:
      
    // parameterized constructor
    Car(string b, string m, int y) {

        brand = b;
        model = m;
        year = y;
    }

    // code to start car's engine
    void startEngine() {
        cout << brand <<  " " << model << " " << year << " has started its engine."
        << endl;
    }

    // code to accelerate car
    void accelerate() {
        cout << brand << " " << model << " " << year << " is accelerating." << endl;
    }

};


// made for class to run 
int main () {
    Car car1("Toyota", "Corolla", 2020);

    car1.startEngine();
    car1.accelerate();

}



/*
Reflection:

1. What I understood:
I understood that when you're using a parameterized constructor,
it kind of immediately gives the object its values, which is faster
than using a default constructor in my opinion.

2. Difficulties:
Because of the example we did in class (03/02/2026),
I instantly tried to add speed as an object so that the 
accelerate function would work. I thought it was the only way
for me to show how the car is accelerating but I was wrong.

3. Research:
I looked up when it's best to use parameterized constructors. It
was the first constructor to come to my mind when making the code
so it's only best to understand before I continue to use it for all
the future codes I'll make.

4. AI Usage:
I used ChatGPT to ask if my backup method to make the accelerate function
would work. When "speed" was used as an object in class (03/02.2026), we also
used the increment function to accelerate the car. But because "speed" isn't
a part of the example, I just thought to literally say that the car is accelerating.

5. What I learned
I learned that when using constructors, a default one does not need to be 
present first in order for me to use any of the other types. They're all 
independent.*/