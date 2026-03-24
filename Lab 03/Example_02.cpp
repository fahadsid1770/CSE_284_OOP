/* A C++ program to demonstrate the use of static data member. */

#include <iostream>
using namespace std;

class Square
{
private:
    int side; // class er under e jotogulo object create korbo tar variable "side" ex: s1.side diye access korte parbo
public:
    static int objectCount; // different object er jonno different variable create hoina!!! shob gulor jonno ekta var.
    Square()
    {
        objectCount++;
    }
};
// double colon(::) is known as scope resolution operator , kar theke kake access kora jai
int Square::objectCount = 0;
int main()
{
    Square s1;
    cout << "Total objects: " << Square::objectCount << endl;
    Square s2;
    cout << "Total objects: " << Square::objectCount << endl;
    return 0;
}