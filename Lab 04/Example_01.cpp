/* A C++ program to demonstrate the single level inheritance. */

#include<iostream>
using namespace std;
class Shape{
    protected:
    int width;
    int height;
    public: 
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
};

class Rectangle: public Shape{
    public:
    int getArea(){
        return width* height;
    }
};
int main(void){
    Rectangle rect;
    rect.setHeight(10);
    rect.setWidth(20);

    cout<<"Total area: "<<rect.getArea()<<endl;
}