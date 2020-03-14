#include <iostream>

#ifndef ROOFING_H
#define ROOFING_H

class Roofing {
    private:
    int nails = 100;
    int panels = 1;
    
    public:
    int getNail();
    int getPanel();

    int getTotalNails() {return nails;};
    int getTotalPanels() {return panels;};
};

#endif