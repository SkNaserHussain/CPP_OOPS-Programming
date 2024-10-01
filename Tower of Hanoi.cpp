//Created by Sk Naser Hussain on 01-10-2024
//Write a program in C++ to implement the tower of Hanoi...

#include<iostream>
using namespace std;


void tower_of_Hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    
    tower_of_Hanoi(n-1, from_rod, aux_rod, to_rod);

    
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;

    
    tower_of_Hanoi(n-1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    
    
    tower_of_Hanoi(n, 'A', 'C', 'B');  
    
    return 0;
}

/*
Enter the number of disks: 2
Move disk 1 from rod A to rod B
Move disk 2 from rod A to rod C
Move disk 1 from rod B to rod C
*/