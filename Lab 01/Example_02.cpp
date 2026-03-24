/* Write a C++ program to define a class BOX with member functions. */

#include <iostream>
using namespace std;
class BOX
{
public:                             // public access of the members
    double length, breadth, height; // data members

    // defining member functions
    void input_value()
    {
        cout << "Enter three sides of a box: ";
        cin >> length >> breadth >> height;
    }
    void print_value()
    {
        cout << "Length : " << length << endl;
        cout << "Breadth : " << breadth << endl;
        cout << "Height : " << height << endl;
    }
    double volume()
    {
        double v = length * breadth * height;
        return v;
    }
};
int main()
{
    BOX myBox; // creating a object

    // Accessing members of class through its object
    myBox.input_value();         
    myBox.print_value(); 

    double vol = myBox.volume(); 
    cout << "Volume of the box: " << vol << endl;
}