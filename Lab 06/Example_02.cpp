// Add members of two different classes using friend functions.

#include <iostream>
using namespace std;

// forward declaration[friend function call korar jonno declare korsi , but code likhinai ekhono]
class Class2;
class Class1
{
private:
    int num1;

public:
    // default constructor 
    Class1()
    {
        num1 = 15;
    }
    
    friend int add(Class1, Class2);
};
class Class2
{
private:
    int num2;

public:
    
    Class2()
    {
        num2 = 1;
    }
    
    friend int add(Class1, Class2);
};

int add(Class1 object1, Class2 object2)
{
    // cout<<"Enter the value you want to add: ";
    // cin>> object1.num1;
    // cout<<"Enter the value you want to add: ";
    // cin>> object2.num2;
    return (object1.num1 + object2.num2);
}
int main()
{
    Class1 object1;
    Class2 object2;
    int result = add(object1, object2);
    cout << "Sum: " << result<< endl;
    return 0;
}