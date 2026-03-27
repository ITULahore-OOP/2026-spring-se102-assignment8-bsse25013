#include "TeachingAssistant.h"

// Constructor
TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa,
                                     double salary, AccessCard card, int workingHours)
    : UniversityMember(name, memberID),   // Single shared base (virtual inheritance)
      Student(name, memberID, cgpa),
      Staff(name, memberID, salary, card) {
    this->workingHours = workingHours;
}

// Overridden function
void TeachingAssistant::displayRole() {
    cout << "Role: Teaching Assistant" << endl;
}
// Overloaded function
void TeachingAssistant::gradeAssignment(int score) {
    cout << "numeric score: " << score << "/100" << endl;
}
void TeachingAssistant::gradeAssignment(string grade) {
    cout << "letter grade: " << grade << endl;
}