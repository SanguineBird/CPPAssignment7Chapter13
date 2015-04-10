/*
This is the header file for class RepeatPrompt.cpp
*/

#ifndef REPEATPROMPT_H
#define REPEATPROMPT_H


#include <iostream> //cout, cin
using namespace std;

namespace RepeatMMoore{
  class RepeatPrompt{
    public:
      bool repeatYN();
        /*Precondition: function is called into a loop dependent on a boolean
        value where a return value of 'false' will end the loop.
        Postcondition: If the user selects 1 for 'yes', the function will
        return true. If the user selects 0 for 'exit', the function will
        return 'false'.If any other input is given, the prompt will repeat.*/

    private:
      bool validInput, repeat;
      int input;
  };
} //end namespace TowersMMoore
#endif //REPEATPROMPT_H

