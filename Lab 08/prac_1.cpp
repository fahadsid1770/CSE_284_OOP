/* 
Create a trapezium class with three data members- base1, base2 
and height- and a function to calculate 
the trapezium area . The class has three constructors which are:

1- having no parameter: values of  all base1, base2, height = 0
2- has 3 numbers as parameters : the 3 nums are assigned as base1, base2, height
3- having two nums as parameters: bases and height are assigned those nums

Your task is to create onjects of the 'Trapezium' class using diff constructor with no parameter, one and three parameter
*/

#include<iostream>
using namespace std;

class Trapezium{
    private:
    int base1, base2, height;
    public:
    Trapezium(){
        base1 = 0;
        base2 = 0;
        height = 0;
    }
    Trapezium(int b1, int b2, int h){
        base1 = b1;
        base2 = b2;
        height = h;
    }
    Trapezium(int b, int h){
        base1 = b;
        base2 = b;
        height = h;
    }
    int area(){
        int ar;
        return 0.5*( base1 + base2)* height;
    }

};
int main(){
    Trapezium trap1;
    Trapezium tarp2(3, 4, 7);
    Trapezium trap3(10 , 6);

    cout << "Area of trapezium 1: " << trap1.area() << endl;
    cout << "Area of trapezium 2: " << tarp2.area() << endl;
    cout << "Area of trapezium 3: " << trap3.area() << endl;
return 0;
}