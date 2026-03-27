#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"

// Staff class 
class Staff : virtual public UniversityMember {
    double salary;       // Staff salary
    AccessCard card;     // Composition (HAS-A relationship)

public:
      //Paramtrized constructor
    Staff(string name, int memberID, double salary, AccessCard card);
     //getter
    double getSalary();
    //display role
    void displayRole() override;
    // Display card details
    void displayCard();
};

#endif