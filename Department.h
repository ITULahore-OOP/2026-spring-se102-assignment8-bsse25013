#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"

// Department contains multiple members:Aggregation
class Department {
    string departmentName;
    UniversityMember* members[50]; // Polymorphic array
    int memberCount;

public:
    Department(string departmentName);

    void addMember(UniversityMember* member);

    // Demonstrates Run-Time Polymorphism
    void displayAllRoles();
};

#endif