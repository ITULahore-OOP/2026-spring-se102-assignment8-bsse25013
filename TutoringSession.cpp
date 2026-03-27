#include "TutoringSession.h"

// Constructor
TutoringSession::TutoringSession(int sessionID, double durationMinutes,
                                 TeachingAssistant* ta, Student* student) {
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}

// Getter
double TutoringSession::getDuration() {
    return durationMinutes;
}
// Display session info
void TutoringSession::displaySession() {
    cout << "Session ID: " << sessionID
         << ", Duration: " << durationMinutes << " minutes" << endl;
}
//  operator to combine sessions
TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    return TutoringSession(0,
        this->durationMinutes + other.durationMinutes,
        ta, student);
}
// operator to compare sessions
bool operator>(TutoringSession s1, TutoringSession s2) {
    return s1.getDuration() > s2.getDuration();
}