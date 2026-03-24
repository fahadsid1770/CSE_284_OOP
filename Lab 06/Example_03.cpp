// A C++ program to demonstrate the working of friend class.

#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
private:
    int numA;

    friend class ClassB;

public:
    ClassA()
    {
        numA = 16;
    }
};
class ClassB
{
private:
    int numB;

public:
    ClassB()
    {
        numB = 4;
    }
    int add()
    {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main()
{
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}