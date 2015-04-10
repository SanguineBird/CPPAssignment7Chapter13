/*
This is the header file for class TowersOfHanoi.cpp
*/

#ifndef TOWERSOFHANOI_H
#define TOWERSOFHANOI_H

#include <iostream> //cout
using namespace std;

namespace TowersMMoore{
  class TowersOfHanoi{
    public:
      TowersOfHanoi();
      TowersOfHanoi(int totalDiscs);
      int getMoves(){return moves;}
      int getMaxIndex(){return maxIndex;}
      char* getDiscs(){return discs;}
      char getDiscsIndex(int index){return discs[index];}
      //recurrent function moves 1 disc:
      void moveDisc(int disc, char source, char dest, char spare);
      ~TowersOfHanoi();
    private:
      //prints latest movement of disc to screen using cout:
      void display(int index);
      
      int moves;
      int maxIndex;
      typedef char* CharPtr;
      CharPtr discs;
  };
} //end namespace TowersMMoore
#endif //TOWERSOFHANOI_H

