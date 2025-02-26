#include <iostream>
using namespace std;

int main()
{
    //Holds calculator "buttons"
    string displayArr[1][4] = {
        {"C", "()", "%", "/"},
    };

    //Displays calculator
    for (int row = 0; row < 1; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << displayArr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
