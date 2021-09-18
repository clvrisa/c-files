// Assignment 5.3 Files

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string aword, fileName;
    ifstream inFile;
    int wordcount = 0;
    char letter;

    cout << "    *** A SIMPLE FILE PROCESSING PROGRAM ***\n";
    cout << "Enter a filename or type quit to exit: ";
    cin >> fileName;

    do
    {
    inFile.open(fileName);

    cout << "***********************\n";
    cout << fileName << " data" << endl;

    inFile.get(letter);

    while(inFile)
    {
        cout << letter;
        inFile.get(letter);
    }
    cout << "\n***********************\n";

    inFile.close();
    inFile.open(fileName);

    inFile >> aword;

    while(inFile)
    {
        wordcount++;
        inFile >> aword;
    }
    cout << fileName << " has " << wordcount << " words." << endl;

    inFile.close();
    cout << "Enter a filename or type quit to exit: ";
    cin >> fileName;
    }

    while (fileName != "quit");

    return 0;
    }

    /*
        *** A SIMPLE FILE PROCESSING PROGRAM ***
Enter a filename or type quit to exit: file1.txt
***********************
file1.txt data
This &%file              should!!,...



have exactly 7 words.
***********************
file1.txt has 7 words.
Enter a filename or type quit to exit:
*/
