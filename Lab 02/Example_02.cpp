/* Write C++ program to demonstrate the use of Parameterized Con-
structor. */

#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double height;

public:
    Rectangle(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    double calculateArea()
    {
        return length * height;
    }
};
int main()
{
    Rectangle rect1(3, 4);
    Rectangle rect2(10.2, 6.5);

    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;
    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;
    return 0;
}