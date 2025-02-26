#include <iostream>
using namespace std;

int main()
{
    //Holds calculator "buttons"
    string displayArr[5][4] = {
        {"C", "P", "%", "/"},
        {"7", "8", "9", "*"},
        {"4", "5", "6", "-"},
        {"1", "2", "3", "+"},
        {"-", "0", ".", "="}
    };

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
            cout << " " << displayArr[row][col] << " ";
        }
        cout << "|";
        cout << endl;
    }
    cout << "+------------+" << endl;

    return 0;
}
