#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H

#include "TeachingAssistant.h"

// Represents a tutoring session
class TutoringSession {
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta; // Association
    Student* student;      // Association

public:
      //CONSTRUCTOR
    TutoringSession(int sessionID, double durationMinutes,
                    TeachingAssistant* ta, Student* student);

    double getDuration();

    void displaySession();

    // Member operator overloading (+)
    TutoringSession operator+(const TutoringSession& other);
};

// Non-member operator overloading (>)
bool operator>(TutoringSession s1, TutoringSession s2);

#endif