/* Define a class Distance with distances in feet and inch and with a print
function to print the distance.
a) overload < operator to compare two distances using member function.
b) overload + operator to add two Distances using friend function. */

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    Distance() {
        feet = 0;
        inch = 0;
    }

    void input() { 
        cin >> feet >> inch; 
    }

    void calculation() {
        feet += inch / 12;
        inch %= 12; 
    }

    friend Distance operator+(Distance d1, Distance d2) {
        Distance temp;
        temp.feet = d1.feet + d2.feet;
        temp.inch = d1.inch + d2.inch;
        temp.calculation();
        return temp;
    }

    bool operator<(Distance d) {
        if (feet < d.feet) {
            return true;
        } else if (feet == d.feet && inch < d.inch) {
            return true;
        }
        return false; 
    }

    void output() {
        cout << feet << " feet " << inch << " inches" << endl;
    }
};

int main() {
    Distance d1, d2, result;

    cout << "Enter first distance- " << endl;
    d1.input();

    cout << "Enter second distance- " << endl;
    d2.input();

    if (d1 < d2) {
        cout << "First distance is less than second distance." << endl;
    } else {
        cout << "First distance is greater than second distance." << endl;
    }

    result = d1 + d2;
    cout << "Sum of distances: ";
    result.output(); 

    return 0;
}