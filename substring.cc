//*********************************************************
//
// File: substring.cc
// Date: April 4th, 2019
// Name: Sebastien Hucks
// Description: A program that finds occurences of a substring within a string, taking into
//              account both uppercase and lowercase differences.
//
//*********************************************************

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int countOccurences(string subInput, string searchInput);

int main(int argc, char const *argv[]){

    if(argc != 3){
    cout << "Error: Invalid number of arguments. Please enter in the format: " << endl;
    cout << "{./a.out} {substring} {string}" << endl;
    return 0;
    }

    int number = countOccurences(argv[1], argv[2]);
    cout << "The substring occurs " << number << " times." << endl;

    return 0;
}

int countOccurences(string subInput, string searchInput){
    int count = 0;
    string lowerSubInput = subInput;
    string lowerSearchInput = searchInput;    

    int subLength = subInput.length();
    int searchLength = searchInput.length();
    
    int i = 0;
    while(i < subLength){
    lowerSubInput[i] = tolower(subInput[i]);
    ++i;
    }
    i = 0;
    while(i < searchLength){
    lowerSearchInput[i] = tolower(searchInput[i]);
    ++i;
    }

    int location = lowerSearchInput.find(lowerSubInput);
    if(location == string::npos){
        cout << "Substring not found." << endl;
    } else {
        while(location != string::npos){
        location = lowerSearchInput.find(lowerSubInput, location+1);
        count++;
        }
    }

    return count;
}
