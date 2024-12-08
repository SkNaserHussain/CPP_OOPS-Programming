//Write a code in C++ to implement exception handling.....
//created by Sk Naser Hussain

#include<iostream>
using namespace std;

int main(){
    int n,d,div;
    cout<<"Enter two numbers:"<<endl;
    cin>>n>>d;
    try{
        if(d==0){
            throw d;
        }
        div=n/d;
    }
    catch(int exp){
        cout<<"Division by 0 is not allowed!!"<<exp<<endl;
    }
    cout<<"Division is:"<<div<<endl;
    return 0;
}


/*
Enter two numbers:
20
10
Division is:2
*/
/*
Enter two numbers:
10
0
Division by 0 is not allowed!!0
Division is:0
*/