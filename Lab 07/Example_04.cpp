/* Operator overloading using Friend Function. */
#include<iostream>
using namespace std;

class PrePost {
    int a;
    public:
    PrePost() { 
        a = 0; 
    }
    void display() { 
        cout << a << endl; 
    }
    friend PrePost operator++(PrePost x);
    friend PrePost operator++(PrePost x, int); 
};

PrePost operator++(PrePost x) {
    PrePost z;
    cout <<"Prefix " <<endl;
    z.a = ++x.a;
    return z; 
}

PrePost operator++(PrePost x, int v) {
    PrePost z;
    cout <<"Postfix " <<endl;
    z.a = x.a++;
    return z; 
}

int main() {
    PrePost p,x;
    x.display();
    p.display();

    x = p++;
    x.display();
    p.display();

    x = ++p;
    x.display();
    p.display();
    return 0; }