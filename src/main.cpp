#include <iostream>

#include "menu.h"

using namespace std;

int main (int argc, char ** argv) {

    Menu *menu = new Menu();

    menu->printBanner();
    
    return 0;
}