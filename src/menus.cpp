#include <iostream>
#include <sstream>

#include "menus.h"

void Menus::printBanner() {
    std::cout << this->banner << std::endl << std::endl;
}

void Menus::makeSpaces(int count) {
    for(int i = 0; i < count; i++) {
        std::cout << std::endl;
    }
}

int Menus::printMenuAndGetItem(list<string> const &items) {

    int count = 1;
    int item = 0;
    for (auto const& i: items) {
        std::cout << count << ". " << i << "\n";
        count ++;
    }

    cout << "What do you do ?\n";
    cin >> item;
    do{
        if(cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        else if(item <= 0 || item > items.size()) {
            cout << "Please choose an appropriate item..." << endl;
            cin >> item;
        }
    } while(item <= 0 || item > items.size());

    cout << endl;

    return item;
}