#include "./function.h"

int main()
{
    string op = ""; //Stores user's choice

    //Holds calculator "buttons"
    string displayArr[5][4] = {
        {"C", "P", "%", "/"},
        {"7", "8", "9", "*"},
        {"4", "5", "6", "-"},
        {"1", "2", "3", "+"},
        {"-", "0", ".", "="}
    };

    //Clears terminal on execution
    system("cls");

    //Main loop
    do
    {
        //Display full calculator
        displayCal(displayArr);
        
        //Exit loop if n
        cout << "Continue? (y/n) ";
        cin >> op;

        //Clears terminal
        system("cls");
    }
    while(op != "n");

    cout << "Exiting..." << endl;

    return 0;
}
