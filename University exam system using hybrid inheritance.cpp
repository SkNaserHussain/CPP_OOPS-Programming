////Write a C++ program to hybrid inheritance with respect to the university examination system

#include <iostream>
#include <string>
using namespace std;

class Subject {
public:
    string sub;
    Subject() {
        cout << "Enter your subject: ";
        getline(cin, sub);
    }
};

class GPA1 : virtual public Subject {
public:
    float gp1;
    GPA1() {
        cout << "Enter your grade point for " << sub << ": ";
        cin >> gp1;
        cin.ignore();  // Clear newline character for further getline calls
    }
};

class GPA2 : virtual public Subject {
public:
    float gp2;
    GPA2() {
        cout << "Enter your grade point for " << sub << ": ";
        cin >> gp2;
        cin.ignore();
    }
};

class Exam : public GPA1, public GPA2 {
public:
    string name;
    Exam() {
        cout << "Enter your name: ";
        getline(cin, name);
    }

    void display() {
        cout << "\nStudent: " << name << endl;
        cout << "Subject: " << sub << endl;  // Single subject shared between GPA1 and GPA2
        cout << "Grade Point 1: " << gp1 << endl;
        cout << "Grade Point 2: " << gp2 << endl;
    }
};

int main() {
    Exam x;
    x.display();
    return 0;
}
