/*
Meghan Moore
March 28, 2015
CIT 245 - Data Structures and Programming C++
Assignment 7 - Chapter 13
Purpose: Implement the Towers of Hanoi using recursion.
*/

#include <iostream> //cin, cout, cerr, endl
#include <cstdlib> //system
using namespace std;
#include "TowersOfHanoi.h"
#include "RepeatPrompt.h"

int main(){
  int totalDiscs;

  do{
    namespace TowersMMoore{
      cout << "Enter number of disks:\n";
      cin >> totalDiscs;
      
      TowersOfHanoi(totalDiscs); //constructor
      cout << "All discs begin on tower A.\n";
      
      moveDiscs();
      cout << "Number of moves: " << getMoves(); << endl << endl;
      //TESTING!!!!!!!!!!!!
        cout << "Error Testing:";
        for(int i = 0; i <= maxIndex; i++){
          cout << "disc: " << i + 1 << " tower: " << discs[i] << endl;
        }
        cout << endl << endl;
      //TESTING!!!!!!!!!!!!!!
    } //end namespace TowersMMoore
  }while (RepeatMMoore::repeatYN());
  
  system("pause");
  return 0;
} //end main
