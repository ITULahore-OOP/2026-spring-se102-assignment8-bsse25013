#include "Department.h"
#include "TutoringSession.h"

int main() {

    // Creating AccessCard
    AccessCard c1("A101", 2);

    // Creating objects
    Student s1("Ali", 1, 3.5);
    Staff st1("Ahmed", 2, 50000, c1);
    TeachingAssistant ta1("Sara", 3, 3.8, 30000, c1, 20);

    // Creating Department
    Department d("Computer Science");

    // Adding members Aggregation + Polymorphism
    d.addMember(&s1);
    d.addMember(&st1);
    d.addMember(&ta1);

    // Display roles: Run-Time Polymorphism
    d.displayAllRoles();

    cout << "------------------" << endl;

    // Compile-time polymorphism :function overloading
    ta1.gradeAssignment(90);
    ta1.gradeAssignment("A");

    cout << "------------------" << endl;

    // Creating sessions
    TutoringSession t1(1, 60, &ta1, &s1);
    TutoringSession t2(2, 30, &ta1, &s1);

    // Operator +
    TutoringSession t3 = t1 + t2;
    t3.displaySession();

    // Operator >
    if (t1 > t2) {
        cout << "Session 1 is longer" << endl;
    }

    return 0;
}