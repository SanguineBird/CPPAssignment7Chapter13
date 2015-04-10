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
  
  void TowersOfHanoi::moveDiscs(){
    //Step 1-------------------
    cout << "step 1\n"; //!!!!!!!!!!!!!!!!!!
    for(int i = maxIndex; i >= 0; i--){
      if(discs[i - 1] == 'C'){ //not A or B
        discs[i] = 'B';
        display(i);
        moves++;
      }
      else if(discs[i - 1] == 'B'){ //not A or C
        discs[i] = 'C';
        display(i);
        moves++;
      }
      else
        moveDiscs();
    } //end for
    
    //Step 2-------------------
    cout << "step 2\n"; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    if((discs[maxIndex - 1] == 'B')){ //not A or C
      discs[maxIndex] = 'C';
      display(maxIndex);
      moves++;
    }
    else
      moveDiscs();
      
    //Step 3-------------------
    cout << "step 3\n";
    for(int n = maxIndex; n >= 0; n--){
      if(discs[n - 1] == 'A'){ //not B or C
        discs[n] = 'C';
        display(n);
        moves++;
      }
      else if(discs[n - 1] == 'C'){ //not B or A
        discs[n] = 'A';
        display(n);
        moves++;
      }
      else
        moveDiscs();
    } //end for
  } //end moveDiscs

  //uses cout
  void TowersOfHanoi::display(int index){
    cout << "Disc " << (index + 1) << " moved to tower " << discs[index] << endl;
  } //end display
  
  bool TowersOfHanoi::allDiscs(char tower){
    bool rValue;
    
    for(int i = maxIndex; i >= 0; i--){
      if (discs[i] != tower){
        rValue = false;
        break;
      }
      else
        rValue = true;
    }
    
    cout << rValue << endl;
    return rValue;
  } //end allDiscs
  
  TowersOfHanoi::~TowersOfHanoi()
  {delete [] discs;}
} //end namespace TowersMMoore
