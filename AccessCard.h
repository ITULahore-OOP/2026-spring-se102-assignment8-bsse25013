#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <iostream>
using namespace std;

// Represents ID card of staff
class AccessCard {
    string cardID;      // Card number
    int accessLevel;    // Access level 

public:
    // Constructor with default values
    AccessCard(string cardID = "", int accessLevel = 0);
    // Getters
    string getCardID();
    int getAccessLevel();
    // Display card info
    void displayCardInfo();
};

#endif