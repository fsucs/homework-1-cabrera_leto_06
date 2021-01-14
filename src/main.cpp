
/**
@mainpage COP 3330 Project 1

@author Mauricio Cabrera

I worked on this project myself, my partner never responded to my messages.

The program:
	outputs the highest count of single character in a string.
	assumes there is only one character with the highest count.
	

*/

#include <iostream>
#include <example.hpp>
#include <assert.h>
#include <string>

int get_max_count(std::string sinput)
{
  //variable used to send output to main
  int MaxCharCount = 0;
  
 //
  for(char ch = 32; ch < 127; ch++)
	{
	 int count = 0;

	//unsigned int to fix compiler warning
	 for(unsigned int i = 0; i < sinput.size(); i++)
	{

		if(ch == sinput[i])
			count++;
	}
	  if(count > MaxCharCount)
	MaxCharCount = count;
	}

    return MaxCharCount;
}

int main(int argc, char *argv[]){
   {
        string line; 
        cout << "Please input a string: "; 
        getline(cin, line);
        cout << get_max_count(line) << endl;
    }

	return 0;

}
