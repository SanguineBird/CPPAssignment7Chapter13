/*
This is the implementation file for the class TowersOfHanoi.
*/

#include <iostream> //cout
using namespace std;
#include "TowersOfHanoi.h"

namespace TowersMMoore{
  //default constructor:
  TowersOfHanoi::TowersOfHanoi(){
    discs = new char[3];
    maxIndex = 2;
    moves = 0;
    
    for(int i = 0; i <= maxIndex; i++){
      discs[i] = 'A';
    }
  }
  
  //overloaded constructor:
  TowersOfHanoi::TowersOfHanoi(int totalDiscs){
    discs = new char[totalDiscs];
    maxIndex = totalDiscs - 1;
    moves = 0;
    
    for(int i = 0; i <= maxIndex; i++){
      discs[i] = 'A';
    }
  }

  //Based on research
  //Source: http://www.cs.cmu.edu/~cburch/survey/recurse/hanoiimpl.html
  void TowersOfHanoi::moveDisc(int disc, char source, char dest, char spare){
    if (disc == 0){
       discs[disc] = dest;
       display(disc);
       moves++;
  	}
    else{
      moveDisc(disc - 1, source, spare, dest);
      discs[disc] = dest;
      display(disc);
      moves++;
      moveDisc(disc - 1, spare, dest, source);
    }
  } //end moveDiscs

  //uses cout:
  void TowersOfHanoi::display(int index){
    cout << "Disc " << (index + 1) << " moved to tower " << discs[index] << endl;
  } //end display
  
  TowersOfHanoi::~TowersOfHanoi()
  {delete [] discs;}
} //end namespace TowersMMoore
