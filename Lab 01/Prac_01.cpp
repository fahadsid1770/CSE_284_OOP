/* Write a class having two private variables and one member function which
will return the area and perimeter of the rectangle. */

#include<iostream>
using namespace std;
 
class rect{
    private:
    double length, width;

    public:
    void input(){
        cout<<"Enter the length and width of the rectangle: ";
        cin>>length>>width;
    }
    double area(){
        return length * width;
    }
    double perimeter(){
        return 2 * (length + width);
    }
};
int main(){
    rect r;

    r.input();
    cout<<"Area of rectangle is: "<<r.area()<<endl;
    cout<<"Perimeter of rectangle is: "<<r.perimeter()<<endl;
return 0;
}