#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "menus.h"
#include "roofing.h"

using namespace std;

int main (int argc, char ** argv) {

    string empty = "";

    Menus *menus = new Menus();
    Roofing *roof = new Roofing();

    menus->printBanner();

    do 
    {
    cout << '\n' << "Press Enter to continue...";
    } while (cin.get() != '\n');

    menus->makeSpaces(1000);
    
    cout << "You look around and realize you've arrived at your vacation home!" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));

    cout << "You start to unpack your tools and equipment." << endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(3000));

    


    
    return 0;
}