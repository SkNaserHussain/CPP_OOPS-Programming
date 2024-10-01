//Created by Sk Naser Hussain on 01-10-2024
//Write a C++ program to create a reverse Floyd's triangle

#include<iostream>
using namespace std;
int main()
{
    int n,num=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    float total=(n+1)/2;
    float sum=n*total;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<sum--<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
Enter the number of rows: 3
6 
5 4 
3 2 1 
*/