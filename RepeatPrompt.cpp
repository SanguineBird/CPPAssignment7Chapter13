/*
This is an implementation file for the class RepeatPrompt.
*/

#include <iostream> //cout, cin
using namespace std;
#include "RepeatPrompt.h"

namespace RepeatMMoore{
  bool RepeatPrompt::repeatYN(){
    do{
      cout << "Try Again? (1 = yes, 0 = exit)\n";
      cin >> input;
      cout << endl << endl;
    
      switch (input){
        case 0:
          validInput = true;
          repeat = false;
          break;
        case 1:
          validInput = true;
          repeat = true;
          break;
        default:
          validInput = false;
      } //end switch
    } while(validInput == false);
    
    return repeat;
  } //end repeatYN
} //end namespace RepeatMMoore
