/* Write a C++ Program to calculate the area of different geometric shapes
such as Circle, Triangle, and Rectangle. Use function overloading.
Class Name: Shape */

#include <iostream>
using namespace std;
class Shape
{
public:
    double area(double radius) {
        return M_PI * radius * radius;
    }

    double area(double length, double breadth) {
        return length * breadth;
    }

    double area(double height, double base, string tri) {
        return 0.5 * height * base;
    }
};

int main()
{
    Shape sp;
    double radius, length, breadth, base, height;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << sp.area(radius) << endl;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << sp.area(length, breadth) << endl;

    cout << "Enter height & base of the triangle: ";
    cin >> height >> base;
    cout << "Area of Triangle: " << sp.area(height, base, "triangle") << endl;
    // an additional dummy string parameter to the triangle area function allowing the compiler to distinguish it from the rectangle area function.  
}