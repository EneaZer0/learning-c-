#include <iostream>

using namespace std;

// Exercise 1

/* Question 1
*
* Write a program that allows the user to enter the grade scored in a 
* programming class (0-100). If the user scored a 100 then notify the 
* user that they got a perfect score. 
*
*/ 

/* Question 2
*
* Modify the program so that if the user scored a 90-100 it informs
* the user that they scored an A 
*
*/ 

/* Question 3
*
* Modify the program so that it will notify the user of their letter
* grade 0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*
*/ 

int main () {

  int grade;
  cout << "Enter your grade from the programming class\n";
  cin >> grade;

  if (grade < 60) {
    cout << "You have a F\n";
  }else if (grade < 70) {
    cout << "You have a D\n";
  }else if (grade < 80) {
    cout << "You have a C\n";
  }else if (grade < 90) {
    cout << "You have a B\n";
  }else if (grade <= 100) {
    cout << "You have an A\n";
  }else {
    cout << "Error! mark was not valid\n";
  }

}


