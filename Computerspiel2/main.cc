#include <iostream>
#include <stdlib.h>

#include "Game.h"

int main()
{
    bool repeat = true;

    while (repeat)
    {
        game();
        system("clear");
        repeat = false;
    }

    return 0;
}
