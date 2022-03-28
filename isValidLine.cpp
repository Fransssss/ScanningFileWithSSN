// Purpose: Implement the function to validate each line in file
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include "isValidLine.h"
#include "isValidSSN.h"

bool isValidLine(string& line)
{
    size_t commaPos;
    commaPos = line.find(',');            // find the position of comma then return the index
    string possibleSSN;

  for(size_t i = 0; i < line.length(); ++i)
  {
      if(commaPos == string::npos)           // if there is no comma in the string
      {
          return false;
      } else
      {
        possibleSSN = line.substr(commaPos + 1,  line.length() - commaPos);     // interesting thing, start for ',' then move one step before take line
        return isValidSSN(possibleSSN);
      }
  }


    return true;
}
