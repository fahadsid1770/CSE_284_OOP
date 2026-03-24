/* -> Access specifier ke exploit kore
It can use all public , protected, private variable
a friend function can be friend of multiple class means
same variable can access of the variable of multiple function
->
*/
/*
--> Security to obstruction-- access block kora hiearchy onujayi
like higher level er manager er better access thake and lower level er gulo
te shob access kora jaina
--> also known as SQL injection. */
/*
website urai dibo :3
name;
drop table */

// friendship inherit kora jaina like class er friend function derived e direct chole jabe na, amar externally bole dite hobe

/* Friend function complexity kom as 100 ta member funtion declare korte hoina */


// A C++ program to demonstrate the friend function.
#include <iostream>
using namespace std;
class Distance{
    private:
    int meter;
    int value;

    //friend func. initialization
    friend int addvalue(Distance);

    public:
    Distance(){
        meter = 0;
    }
    // Distance(int m){
    //     meter = m;
    // }
};

int addvalue(Distance d){
    cout<<"Enter the value you want to add: ";
    cin>> d.value;
    return d.meter + d.value;
}
int main()
{
    Distance D;
    int result = addvalue(D);
    cout<<"Distance: "<< result;// friend function er argument object nijei
    return 0;
}