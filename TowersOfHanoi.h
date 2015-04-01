/*
This is the header file for class TowersOfHanoi.cpp
*/

#ifndef TOWERSOFHANOI_H
#define TOWERSOFHANOI_H

namespace TowersMMoore{
  class TowersOfHanoi{
    public:
      TowersOfHanoi();
      TowersOfHanoi(int totalDiscs);
      int getMoves(){return moves;}
      int getMaxIndex(){return maxIndex;}
      char* getDiscs(){return discs;}
      //recurrent function moves 1 disc:
      void moveDiscs();
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

