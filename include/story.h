#include <chrono>
#include <thread>

#include "menus.h"
#include "roofing.h"

#ifndef STORY_H
#define STORY_H

class Story {
    public:
    void start();

    private:

    bool backInTime;

    Menus *menus = new Menus();
    Roofing *roof = new Roofing();
    
    void waitFor(int seconds);

    void leavingCar();
    void gettingTools();
    void settingUp();

};

#endif