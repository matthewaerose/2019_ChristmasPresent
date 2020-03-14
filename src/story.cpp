#include <iostream>
#include <chrono>
#include "story.h"

void Story::start() {
    if(this->backInTime) {
        std::cout << "You feel sleepy, as if waking from a deep sleep..." << std::endl;
        this->waitFor(3);
    }
    this->menus->printHouse();
    this->leavingCar();
    std::cout << "Where would you like to enter?" << std::endl;
    int choice = this->menus->printMenuAndGetItem({"Front Door", "Back Yard"});

    if(choice == 1){
        std::cout << "Going to the front door!" << endl;
        this->waitFor(3);
        this->menus->printPixel();
        this->waitFor(1);
        this->menus->printFrank();
        this->waitFor(1);
        this->menus->printBella();
        this->waitFor(1);

        std::cout << "THE DOGS LOVE YOU!!!" << endl;
        this->waitFor(3);

        std::cout << "After giving everybody some love and pets, time to go outside." << endl << endl;
    } else if (choice == 2){
        std::cout << "Going to the back gate!" << endl << endl;
        this-> waitFor(3);
    }

    std::cout << "Time to start working on the roof!" << endl;

    this->waitFor(1);

    std::cout << "What do you do first?" << endl;
    choice = -1;
    int outsideChoice = this->menus->printMenuAndGetItem({"Climb ladder", "Get some nails", "Get a panel"});
    bool hasNails = false;
    bool hasPanel = false;

    while(this->roof->getTotalPanels() != 0) {
        while (!hasNails || !hasPanel) {
            if (outsideChoice == 2) {
                if(hasNails) {
                    std::cout << "You already have some nails..." << endl;
                } else {
                    std::cout << "** You got some nails!! **" << endl << endl;
                    this->waitFor(1);
                    this->roof->getNail();
                    hasNails = true;
                }
            }
            else if (outsideChoice == 3) {
                if(hasPanel) {
                    std::cout << "You already have a panel..." << endl;
                } else {
                    std::cout << "** You got a panel!! **" << endl;
                    this->waitFor(1);
                    this->roof->getPanel();
                    hasPanel = true;
                }
            } else {
                this->waitFor(2);
                this->menus->printHorizon();
                std::cout << "the view is beautiful... Too bad you don't have any nails or panels..." << std::endl;
            }
            this->waitFor(1);
            std::cout << "Make another choice!" << endl;
            outsideChoice = this->menus->printMenuAndGetItem({"Climb ladder", "Get nails", "Get a Panel"});
        }

        std::cout << "Time to roof!" << endl <<endl;
        while(hasNails || hasPanel) {
            choice = this->menus->printMenuAndGetItem({"Nail some nails", "Place a panel"});

            if (choice == 1 && hasPanel == true){
                std::cout << "There isn't a panel to nail!" << endl;
            } else if (choice == 1) {
                if(!hasNails) {
                    cout << "You don't have anymore nails..." << endl;
                } else {
                    std::cout << "You nailed the panel down!" << endl << endl;
                    hasNails = false;
                }
            } else if (choice == 2) {
                if(!hasPanel) {
                    cout << "You don't have anymore panels...." << endl;
                } else {
                    std::cout << "You placed the panel!" << endl << endl;
                    hasPanel = false;
                }
            }
        }
        cout << "You've run out of nails and need another panel!" << endl;
        this->waitFor(2);
        cout << this->roof->getTotalPanels() + 1 << " more panels to go!" << endl << endl;
        outsideChoice = this->menus->printMenuAndGetItem({"Climb ladder", "Get nails", "Get a Panel"});
    }

    cout << "You've run out of panels..." << endl << endl;
    this->waitFor(2);
    cout << "Rumor has it there are more panels in the warehouse out back..." << endl;

    int finalChoice = this->menus->printMenuAndGetItem({"explore the warehouse", "finished for the day!"});

    if(finalChoice == 2) {
        cout << "I am DONE!" << endl;
        this->waitFor(2);
        cout << "Time to lock up and play some Witcher!" << endl;
        return;
    }
    else{
        cout << "You start to head towards the warehouse..." << endl;
        this->waitFor(4);
        cout << "As you near the entrance, you hear a familiar hum coming from within the ancient doors..." << endl;
        this->waitFor(4);
        cout << "You say to yourself, 'Must be a place of power... gotta check it out.'" << endl;
        this->waitFor(3);
        cout << "As soon as you enter the door, a scittering noise quickly approaches you." << endl;
        this->waitFor(4);
        cout << "Out of the darkness, a horde of bobkins, with blood in their eyes, and death on their voices, start to attack you!" << endl;
        this->waitFor(3);
        cout << "**SWISH**" << endl;
        this->waitFor(1);
        cout << "**SLASH**" << endl;
        this->waitFor(1);
        cout << "You manage to take a few with you before succumbing to your wounds..." << endl;
        this->waitFor(10);
        this->start();
    }
}

void Story::waitFor(int time) {
    for(int i = 0; i < time; i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "~~" << std::flush;
        // std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Story::leavingCar() {
    std::cout << "You look around and realize you've arrived at your vacation home!" << std::endl;
    this->waitFor(4);    
    std::cout << "You start to unpack your tools and equipment." << std::endl;
    this->waitFor(3);    
}

void Story::gettingTools() {}
void Story::settingUp() {}
