#include "Department.h"

// Constructor
Department::Department(string departmentName) {
    this->departmentName = departmentName;
    memberCount = 0;
}

// Add member to department
void Department::addMember(UniversityMember* member) {
    members[memberCount++] = member;
}

// Loop and call displayRole shows polymorphism
void Department::displayAllRoles() {
    cout << "Department: " << departmentName << endl;
    for (int i = 0; i < memberCount; i++) {
        members[i]->displayRole(); 
    }
}