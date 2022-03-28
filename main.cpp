#include <iostream>
#include <fstream>
#include "isValidLine.h"
#include "isValidSSN.h"

using std::ifstream;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main()
{
    ifstream input;                                          // to open file
    string fileName;                                         // to put data from file

    cout << " Input the name of file : " << endl;
    cin >> fileName;
    cout << endl;

    input.open(fileName);
    if(!input.is_open())                                      // if flie cannot be opened
    {
        cout << " File name cannot be opened " << endl;
    } else                                                     // proceed if file exist
    {
        string readLine;
        while ( getline (input,readLine))                 // while there is data to take out from file
        {
            if(isValidLine(readLine))                       //
            {
                cout << readLine << " | Valid SSN" << endl;
            } else
            {
                cout << readLine << " | Invalid SSN" << endl;
            }
        }

    }
    return 0;
}
