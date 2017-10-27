/**
 *  @author Sheng Lo
 *  @date Put the date here
 *  @file main.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
#include "cs150check.h"

string STUDENT = "ilo";    // Add your name Blackboard/occ-email ID

/**
 * Write a program that prompts the user to 
 * provide a single character from the alphabet. 
 * Print "vowel" or "consonant", depending on the user input. 
 * If the user input has a length other than 1 or if the 
 * input is not a letter in the set [a-zA-Z] then print an 
 * appropriate error message.
 *
 * @param cin the standard input stream.
 * @param cout the standard output stream.
 * @return 0 for success.
 */
int run(istream& cin, ostream& cout)
{
    cout << "Enter a single character from the alphabet: ";
    string s;
    cin >> s;

    string result = "Not processed";
    // Processing goes here
    if (s.length() != 1)
    {
        result = "Not a single character";
        
    }
    else if ((s >= "a" && s <= "z") || (s >= "A" && s <= "Z"))
    {
        string vowels = "aeiouAEIOU";
        if (vowels.find(s) != string::npos)
        {
            result = "Vowel";
        }
        else
        {
            result = "Consonant";
        }
    }
    else
    {
        result = "Not an alphabetical character";
    }
    // Ouput goes here
    cout << "Result = [" << result << "]" << endl;
    
    return 0;
}

