#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
using namespace std;

void displayCal(char arr[5][4]);
void exeOption(char op);

void displayCal(char arr[5][4])
{
    //Displays calculator
    //Lines 17-19 is the calulator screen
    cout << "+------------+" << endl;
    cout << "|" << "            " << "|" << endl;
    cout << "+------------+" << endl;
    //lines 21-31 is the number pad
    for (int row = 0; row < 5; row++)
    {
        cout << "|";
        for (int col = 0; col < 4; col++)
        {
            cout << " " << arr[row][col] << " ";
        }
        cout << "|";
        cout << endl;
    }
    cout << "+------------+" << endl;
}

void exeOption(char op)
{
    //Check if op is a number
    if (isdigit(op))
    {
        cout << op << endl; //To Delete Later
    }
}

#endif
