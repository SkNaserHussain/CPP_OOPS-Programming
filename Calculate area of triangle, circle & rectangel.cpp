//Created by Sk Naser Hussain on 02-10-2024
//Write a program in C++ to create a class which will calculate the area of triangle,circle and rectangle having the same name...

#include<iostream>
#include<cmath>  
using namespace std;

class AreaCalculator {  
    public:
    double area_triangle(double base, double height) {
        return 0.5 * base * height;
    }

    double area_circle(double radius) {
        return M_PI * radius * radius;  
    }

    double area_rectangle(double length, double breadth) {
        return length * breadth;
    }
};

int main() {
    AreaCalculator obj;  
    double base, height, radius, length, breadth;
    
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "Area of the triangle: " << obj.area_triangle(base, height) << endl;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << obj.area_circle(radius) << endl;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Area of the rectangle: " << obj.area_rectangle(length, breadth) << endl;

    return 0;
}

/*
Enter the base of the triangle: 5
Enter the height of the triangle: 2
Area of the triangle: 5
Enter the radius of the circle: 4
Area of the circle: 50.2655
Enter the length of the rectangle: 6
Enter the breadth of the rectangle: 8
Area of the rectangle: 48
*/
