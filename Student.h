#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"

// Student class: virtual inheritance to solve diamond problem
class Student : virtual public UniversityMember {
    double cgpa;   // Student CGPA

public:
    //constructor
    Student(string name, int memberID, double cgpa);
    //getters
    double getCGPA();
    void updateCGPA(double newCGPA);
    // Override base class function
    void displayRole() override;
};

#endif