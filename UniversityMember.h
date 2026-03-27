#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <iostream>
using namespace std;

// Abstract Base Class
class UniversityMember {
    protected:
    string name;      // Member name
    int memberID;     // Unique ID

public:
    // Constructor
    UniversityMember(string name, int memberID);
    // Virtual destructor
    virtual ~UniversityMember();
    // Getters
    string getName();
    int getMemberID();
    // Pure virtual function (forces child classes to implement)
    virtual void displayRole() = 0;
};

#endif