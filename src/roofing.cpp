#include "roofing.h"

int Roofing::getNail() {
    return -- this->nails;
}

int Roofing::getPanel() {
    this->panels --;
    return this->panels;
}
