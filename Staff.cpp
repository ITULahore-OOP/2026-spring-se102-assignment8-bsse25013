#include "Staff.h"

// Constructor
Staff::Staff(string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID), card(card) {
    this->salary = salary;
}
// Getter
double Staff::getSalary() {
    return salary;
}
// Overridden function
void Staff::displayRole() {
    cout << "Role: Staff" << endl;
}
// Show access card info
void Staff::displayCard() {
    card.displayCardInfo();
}