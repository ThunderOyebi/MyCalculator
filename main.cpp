#include "./function.h"

int main()
{
    char op = ' '; //Stores user's choice

    //Holds calculator "buttons"
    char displayArr[5][4] = {
        {'C', 'P', '%', '/'},
        {'7', '8', '9', '*'},
        {'4', '5', '6', '-'},
        {'1', '2', '3', '+'},
        {'-', '0', '.', '='}
    };

    //Clears terminal on execution
    system("cls");

    //Main loop
    do
    {
        //Display full calculator
        displayCal(displayArr);
        
        //Exit loop if op is n
        cout << "Continue? (y/n) ";
        cin >> op;

        //Run user's option
        exeOption(op);

        //Clears terminal
        system("cls");
    }
    while(op != 'n');

    cout << "Exiting..." << endl;

    return 0;
}
