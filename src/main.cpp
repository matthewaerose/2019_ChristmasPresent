#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "menus.h"
#include "roofing.h"
#include "story.h"

using namespace std;

int main (int argc, char ** argv) {

    string empty = "";

    Menus *menus = new Menus();
    Story *story = new Story();
    Roofing *roof = new Roofing();

    menus->printBanner();

    do 
    {
    cout << '\n' << "Press Enter to continue...";
    } while (cin.get() != '\n');

    menus->makeSpaces(1000);
    
    story->start();




    
    return 0;
}