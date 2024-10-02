//Created by Sk Naser Hussain on 02-10-2024

// Write a C++ program to find simple interest, with 15% as the default rate.

#include<iostream>
using namespace std;
int main()
{
    int principal, time;
    float rate = 15;  
    float simple_interest;
    
    cout << "Enter the principal amount: ";
    cin >> principal;
    
    cout << "Enter the time in years: ";
    cin >> time;
    
    simple_interest = (principal * rate * time) / 100.0;  

    cout << "Simple Interest is: " << simple_interest << endl;

    return 0;
}

/*
Enter the principal amount: 10000
Enter the time in years: 5
Simple Interest is: 7500
*/
