#include <iostream> 
#include <string>
#include <list>

using namespace std;

#ifndef MENUS_H
#define MENUS_H

class Menus{
    private:
    string banner = \
    "\n\n\nMerry Christmas Davis!\n"\
    "I hope you like this little adventure I made.\n"
    "Enjoy!";

    string house = \
"  ____||____\n"\
" ///////////\\ \n"\
"///////////  \\ \n"\
"|    _    |  | \n"\
"|[] | | []|[]| \n"\
"|   | |   |  | \n";

    string pixel = \
"~~~PIXEL~~~\n"\
"   / \\__\n"\
"  (    @\\___\n"\
"  /         O\n"\
" /   (_____/\n"\
"/_____/   U\n";

    string bella = \
"~~~BELLA~~~\n"\
"  /^ ^\\ \n"\
" / 0 0 \\ \n"\
" V\\ Y /V\n"\
"  / - \\ \n"\
" /    |\n"\
"V__) ||\n";

    string frank = \
"~~~FRANK~~~\n"\
"/(. .)\\    )\n"\
"  (*)____/|\n"\
"  /       |\n"\
" /   |--\\ |\n"\
"(_)(_)  (_)\n";


    string horizon = \
"               ,     :     ,\n"\
"         '.    ;    :    ;    ,`\n"\
"      '-.   '.   ;   :   ;   ,`   ,-`\n"\
"   \"-.   '-.  '.  ;  :  ;  ,`  ,-`   ,-\"\n"\
"      \"-.   '-. '. ; : ; ,` ,-`   ,-\"\n"\
" '\"--.   '\"-.  '-.'  '  `.-`  ,-\"`   ,--\"`\n"\
"      '\"--.  '\"-.   ...   ,-\"`  ,--\"`\n"\
"           '\"--.  .:::::.  ,--\"`\n"\
"------------------:::::::------------------\n"\
"                   ~~~~~\n"\
"                    ~~~\n"\
"                     ~";
    public:
    
    void printBanner();
    void printPixel() {cout << pixel << endl;};
    void printBella() {cout << bella << endl;};
    void printFrank() {cout << frank << endl;};
    void printHouse() {cout << house << endl;};
    void printHorizon() {cout << horizon << endl;};
    void makeSpaces(int count);
    int printMenuAndGetItem(list<string> const &items);

};

#endif