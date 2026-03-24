/*Creare a Base class named 'Polygon' with 3 public data members resembling the sides
of the polygon.
Creare a derived class named 'Triangle' that inherits the base class in protected mode.
The derived class has a private data member height and two public member functions(area and parameter)

Now calculate the Triangle area and perimeter.
*/

#include <iostream>
using namespace std;

class polygon
{
public:
    int a, b, c;

    polygon(int aa, int bb, int cc)
    {
        a = aa;
        b = bb;
        c = cc;
    }
};
class triangle : protected polygon
{
private:
    int height;

public:
    triangle(int aa, int bb, int cc) : polygon(aa, bb, cc) {}
    void readdata()
    {
        cout << "Enter the height ";
        cin >> height;
    }
    int parimeter()
    {

        return a + b + c;
    }

    double area()
    {
        return 0.5 * b * height;
    }
};
int main()
{
    triangle t(1, 2, 3);
    t.readdata();
    cout << "Area of triangle: " << t.area() << endl;
    cout << "parimeter of triangle: " << t.parimeter() << endl;

    return 0;
}