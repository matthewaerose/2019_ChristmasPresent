#include "roofing.h"

int Roofing::getNail() {
    return -- this->nails;
}

int Roofing::getPanel() {
    return -- this->panels;
}
