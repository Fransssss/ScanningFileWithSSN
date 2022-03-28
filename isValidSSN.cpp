//
// Created by XaveF on 3/27/2022.
//
#include <istream>
#include <cctype>
using std::string;
using std::isdigit;

bool isValidSSN ( const string& sSN)
{
    string ssFormatDefault = "###-##-####";
    if(sSN.length() != ssFormatDefault.length())                     // make sure the length is correct
    {
        return false;
    }

    for(size_t i = 0; i < sSN.length(); ++i)
    {
        if(sSN[i] != '-')                                            // only char that's not dash that can go to next 'if statement'
        {
            if(!isdigit(sSN[i]))                                  // check if char a digit , this is included in <cctype> library
            {
                return false;
            }
        } else
        {
            if(sSN[i] != '-')                                        // if not number then check it is a dash
            {
                return false;
            }
        }
    }
    return true;
}