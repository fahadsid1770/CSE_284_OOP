/* ++ Operator (Unary Operator) Overloading. */

#include <iostream>
using namespace std;

class Count {
private:
    int value;

public:
    Count() {
        value = 8; 
    }

    // Overload the prefix ++ operator
    void operator++() {
        ++value;
    }

    // Overload the postfix ++ operator
    void operator++(int) // "int" --> dummy argument or dummy operator just to differentiate two overloading function
    {
        value++;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count c1; 
    c1++;     
    c1.display(); 

    ++c1;    
    c1.display();
    return 0;
}