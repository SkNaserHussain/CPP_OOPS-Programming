//Created by Sk Naser Hussain on 1-10-2024
//Write a C++ program which will calculate the average of marks of 5 subjects and 5mstudents from 2 different sections.
#include<iostream>
using namespace std;

class student {
    float marks[5];
    float average;
    
    public:
    
    void inputmarks() {
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> marks[i];
            sum += marks[i];
        }
        average = sum / 5;
    }

    
    friend class section;
};

class section {
    student s[5];

    public:
    
    void inputsection() {
        for (int i = 0; i < 5; i++) {
            cout << "Student " << i + 1 << ":" << endl;
            s[i].inputmarks();
        }
    }

    
    void displayAverages() {
        for (int i = 0; i < 5; i++) {
            cout << "Student " << i + 1 << " average: " << s[i].average << endl;
        }
    }
};

int main() {
    section sections[2];


    for (int i = 0; i < 2; i++) {
        cout << "Section " << i + 1 << ":" << endl;
        sections[i].inputsection();
    }

    
    for (int i = 0; i < 2; i++) {
        cout << "Section " << i + 1 << " averages:" << endl;
        sections[i].displayAverages();
    }

    return 0;
}


/*
Section 1:
Student 1:
Enter marks of subject 1: 25
Enter marks of subject 2: 30
Enter marks of subject 3: 35
Enter marks of subject 4: 40
Enter marks of subject 5: 45
Student 2:
Enter marks of subject 1: 20
Enter marks of subject 2: 25
Enter marks of subject 3: 30
Enter marks of subject 4: 35
Enter marks of subject 5: 40
Student 3:
Enter marks of subject 1: 15
Enter marks of subject 2: 20
Enter marks of subject 3: 25
Enter marks of subject 4: 30
Enter marks of subject 5: 35
Student 4:
Enter marks of subject 1: 10
Enter marks of subject 2: 15
Enter marks of subject 3: 20
Enter marks of subject 4: 25
Enter marks of subject 5: 30
Student 5:
Enter marks of subject 1: 40
Enter marks of subject 2: 50
Enter marks of subject 3: 30
Enter marks of subject 4: 20
Enter marks of subject 5: 28
Section 2:
Student 1:
Enter marks of subject 1: 19
Enter marks of subject 2: 26
Enter marks of subject 3: 32
Enter marks of subject 4: 35
Enter marks of subject 5: 33
Student 2:
Enter marks of subject 1: 16
Enter marks of subject 2: 29
Enter marks of subject 3: 56
Enter marks of subject 4: 8
Enter marks of subject 5: 31
Student 3:
Enter marks of subject 1: 19
Enter marks of subject 2: 26
Enter marks of subject 3: 28
Enter marks of subject 4: 39
Enter marks of subject 5: 45
Student 4:
Enter marks of subject 1: 24
Enter marks of subject 2: 26
Enter marks of subject 3: 32
Enter marks of subject 4: 33
Enter marks of subject 5: 49
Student 5:
Enter marks of subject 1: 46
Enter marks of subject 2: 22
Enter marks of subject 3: 31
Enter marks of subject 4: 43
Enter marks of subject 5: 20
Section 1 averages:
Student 1 average: 35
Student 2 average: 30
Student 3 average: 25
Student 4 average: 20
Student 5 average: 33.6
Section 2 averages:
Student 1 average: 29
Student 2 average: 28
Student 3 average: 31.4
Student 4 average: 32.8
Student 5 average: 32.4


*/