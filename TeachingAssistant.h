#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"

// TA inherits from both Student and Staff : Multiple Inheritance
class TeachingAssistant : public Student, public Staff {
    int workingHours;   // Weekly working hours

public:
    //Constructor
    TeachingAssistant(string name, int memberID, double cgpa,
                      double salary, AccessCard card, int workingHours);

    void displayRole() override;
    // Function Overloading :Compile-Time Polymorphism
    void gradeAssignment(int score);
    void gradeAssignment(string grade);
};

#endif