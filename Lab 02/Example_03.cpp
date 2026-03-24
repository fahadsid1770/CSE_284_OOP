/* Wrire a c++ program to understand the Destructor class in c++ */

#include <iostream>
#include <cstring>
using namespace std;

class Cube
{
    int side;

public:
/*
    Cube()
    {
        side = 6;
        cout << "Creating the wall: " << endl;
        cout << "Length: " << side << endl;

    }
    Cube(int s)
    {
        side = s;
        cout << s << endl;
    }
    */
    ~Cube()
    {
        cout << "Destructor Called"<<endl; // we use this to clean memory
        // garbage collection
    }
};
int main()
{
    
    Cube c;
    /*
    Cube c2;
    Cube c1(8);
    */
    return 0;
}