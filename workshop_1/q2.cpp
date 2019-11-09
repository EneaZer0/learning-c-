// Exercise 2

/* Question 1
*
* Write a program to ask the user to enter any number other than 5 
* until the user enters the number 5. Then tell the user "Hey! you 
* weren't supposed to enter 5!" and exit the program
*
*/ 

/* Question 2
*
* Modify the program so that after 10 iterations if the user still
* hasn't entered 5 will tell the user "Wow, you're more patient than
* I am, you win." and ext.
* 
*/

#include <iostream>

using namespace std;

int main () {
  
  int user_number;
  cout << "Enter a number: \n";
  cin >> user_number;

  
  
if (user_number != 5) {
    for (int i = 1; i < 10; i++) {
      cout << "Hey! you weren't supposed to enter 5! \n";
      cout << "Enter a number: \n";
      cin >> user_number;
    }
      cout << "Wow, you're more patient than I am, you win.\n";
      return 0;
    
  } else {
      cout << "You entered 5 and I won. \n";
  }

  return 0;

}