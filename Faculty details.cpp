//Created by Sk Naser Hussain on 02-10-2024

// Write a C++ program to count the number of faculties in a department and display their details.

#include<iostream>
#include<string>
using namespace std;

class Faculty {
    static int count;
    int number;
    string name;
    string ID;
public:
    Faculty(string name, string ID) {
        this->number = ++count;
        this->name = name;
        this->ID = ID;
    }

    static int getCount() {
        return count;
    }

    void displayDetails() const {
        cout << "Faculty Number: " << number << endl;
        cout << "Faculty Name: " << name << endl;
        cout << "Faculty ID: " << ID << endl;
    }
};

int Faculty::count = 0;

int main() {
    char choice;
    Faculty** faculties = new Faculty*[100]; 
    int index = 0;
    
    do {
        string name, faculty_id;
        cout << "Enter details for faculty " << index + 1 << ":" << endl;
        
        cout << "Enter Faculty name: ";
        cin.ignore();
        getline(cin, name);
        
        cout << "Enter Faculty ID: ";
        getline(cin, faculty_id);
        
        faculties[index++] = new Faculty(name, faculty_id);
        
        cout << "Do you want to add more faculties? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    cout << "\nNumber of faculties in the department: " << Faculty::getCount() << endl;
    cout << "\nDetails of faculties:" << endl;

    for (int i = 0; i < index; i++) {
        faculties[i]->displayDetails();
        cout << endl;
    }

    
    for (int i = 0; i < index; i++) {
        delete faculties[i];
    }

    delete[] faculties;  

    return 0;
}


/*
OUTPUT:-
Enter details for faculty 1:
Enter Faculty name: Mr. Abhinandan Ghosh
Enter Faculty ID: CSE55837
Do you want to add more faculties? (y/n): y
Enter details for faculty 2:
Enter Faculty name: Ms. Anwesha De
Enter Faculty ID: MTH56233
Do you want to add more faculties? (y/n): n

Number of faculties in the department: 2

Details of faculties:
Faculty Number: 1
Faculty Name: r. Abhinandan Ghosh
Faculty ID: CSE55837

Faculty Number: 2
Faculty Name: Ms. Anwesha De
Faculty ID: MTH56233
 */