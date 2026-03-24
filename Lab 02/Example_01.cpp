/* Write a C++ program to demonstrate the use of the default con-
structor. */

#include <iostream>
using namespace std;
class Wall
{
private:
    double length;

public:
    Wall()
    {
        length = 6.5;
        cout << "Creating the wall: " << endl;
        cout << "Length: " << length << endl;
    }
};
int main()
{
    Wall wall1;
    return 0;
}