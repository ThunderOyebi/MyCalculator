#include "./function.h"

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

    displayCal(displayArr);

    return 0;
}
