#include <iostream>
#include "menus.h"

void Menus::printBanner() {
    std::cout << this->banner << std::endl << std::endl;
}

void Menus::makeSpaces(int count) {
    for(int i = 0; i < count; i++) {
        std::cout << std::endl;
    }
}