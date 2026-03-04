/* 
Name: Philicia Edwards
Course: CSCI 272
Lesson #: 4
Code Topic: User Example
Date: 03/03/2026
*/


#include <iostream>
#include <string>

using namespace std;


class User {

    private:

      string username;
      string password;

    public:
      
      User(const string& uname, const string& pwd) {
        username = uname;
        password = pwd;
      }

      bool login(const string& inputUser, const string& inputPwd)
      const {
        return (inputUser == username) & (inputPwd == password);
      }

      void updatePassword(const string& newPwd){
        password = newPwd;
      }
      };




      int main() {

        User user1("prettycool455", "boom383");

        cout << "Login attempt 1: " << (user1.login("prettycool455", "boom383") ? "Success" : "Failure")
        << endl;


        user1.updatePassword("yeahright39");

        cout << "Login attempt 2: " << (user1.login("prettycool455", "boom383") ? "Success" : "Failure")
        << endl;

        
        cout << "Login attempt 3: " << (user1.login("prettycool455", "yeahright39") ? "Success" : "Failure")
         << endl;

      }


      /*
      Reflection:
      
      1. What I understood:
      I understood the importance of protecting sensitive data when using private members
      and how encapsulation works.
      
      2. Difficulties:
      I had a hard time trying to figure out everything that needed
      to be included into the main. Sometimes I find it difficult starting from blank
      when I reach the main after adding in my functions
      
      3. Research:
      I decided to look up more examples of capsulation that included using 
      data protection and abstraction
      
      4. AI Usage:
      I used chatGPT to help me figure out what was missing in my main for my code.
      I had to add in "Success and failure" as proff to show when the passwords worked
      and in what attempts.
      
      5. What I learned:
      I learned how to make a login function that checks out your name and
      password.*/