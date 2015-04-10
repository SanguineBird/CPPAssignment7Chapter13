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
using namespace RepeatMMoore;

int main(){
  int totalDiscs;
  RepeatPrompt repeat;

  do{
    {using namespace TowersMMoore;
      
      cout << "Enter number of disks:\n";
      cin >> totalDiscs;
      
      TowersOfHanoi towers(totalDiscs); //constructor
      cout << "All discs begin on tower A.\nThe destination is tower B.\nThe spare tower is C.\n\n";
      
      towers.moveDisc(towers.getMaxIndex(), 'A', 'B', 'C');
      cout << "Number of moves: " << towers.getMoves() << endl << endl;
      
    } //end namespace TowersMMoore
  }while (repeat.repeatYN());
  
  system("pause");
  return 0;
} //end main
