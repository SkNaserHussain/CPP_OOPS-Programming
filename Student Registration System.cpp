//Write a cpp program to implement multilevel inheritance with respect to student registration system

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();  
    }
    void displayPersonDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    string studentID;
    string course;
public:
    void setStudentDetails() {
        cout << "Enter Student ID: ";
        getline(cin, studentID);
        cout << "Enter Course: ";
        getline(cin, course);
    }
    void displayStudentDetails() const {
        displayPersonDetails();
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

class Registration : public Student {
private:
    string registrationDate;
public:
    void setRegistrationDetails() {
        cout << "Enter Registration Date (DD-MM-YYYY): ";
        getline(cin, registrationDate);
    }
    void displayRegistrationDetails() const {
        displayStudentDetails();
        cout << "Registration Date: " << registrationDate << endl;
    }
};

int main() {
    Registration reg;
    reg.setPersonDetails();
    reg.setStudentDetails();
    reg.setRegistrationDetails();
    cout << "\nStudent Registration Details:\n";
    reg.displayRegistrationDetails();
    return 0;
}

/*
OUTPUT:-
Enter Name: John Doe
Enter Age: 25
Enter Student ID: S1234
Enter Course: Computer Science
Enter Registration Date (DD-MM-YYYY): 01-01-2020
Student Registration Details:
Name: John Doe
Age: 25
Student ID: S1234
Course: Computer Science
Registration Date: 01-01-2020
*/