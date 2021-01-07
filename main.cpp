#include <iostream>
#include "jeu.h"
#include <windows.h>

using namespace std;

int main()
{
    jeu j;
    //ShowWindow(GetConsoleWindow(), SW_HIDE);

    j.loopJeu();
    //ShowWindow(GetConsoleWindow(), SW_SHOW);
    return 0;
}
