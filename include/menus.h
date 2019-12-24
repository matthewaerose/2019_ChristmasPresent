#include <iostream> 
#include <string>

using namespace std;

#ifndef MENUS_H
#define MENUS_H

class Menus{
    private:
    string banner = \
    "\n\n\nMerry Christmas Davis!\n"\
    "I hope you like this little adventure I made.\n"
    "Enjoy!";

    public:
    
    void printBanner();
    void makeSpaces(int count);
    

};

#endif