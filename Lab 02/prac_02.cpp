/* Write a C++ Program to define a class Car with the following specifications:
Private members:
car name, model name, fuel_type: string type
mileage: float type
price: double type
Public members:
displaydata(): Function to display the data members on the screen.Use Constructor
(both Default and parameterized) and destructor. When no parameter is passed the
default constructor will be called with the message ”Default constructor has been
called”.
 */
#include<iostream>
using namespace std;
class Car{
    private:
    string car_name, model_name, fuel_type;
    float mileage;
    double price;

    public:
    Car(){
        car_name = "Unknown";
        model_name = "Unknown";
        fuel_type = "Unknown";
        mileage = 0.0f;
        price = 0.0;
        cout<<"Default constructor has been called."<<endl;
    }
    Car(string carN,string modelN,string fuelT, float mile, double prc){
        car_name = carN;
        model_name = modelN;
        fuel_type = fuelT;
        mileage = mile;
        price = prc;
    }
    void displayData(){
        cout << "\nCar Details: " << endl;
        cout<<"Car name: "<<car_name<<endl;
        cout<<"Model name: "<<model_name<<endl;
        cout<<"Fuel type: "<<fuel_type<<endl;
        cout<<"Mileage : "<<mileage<< " km/l"<<endl;
        cout<<"Price: $"<<price<<endl;
   }
   /*
   ~Car() {
        cout << "Destructor has been called for car: " << car_name << endl;
    }
    */
};


int main(){
    
    Car car1;
    car1.displayData();

    Car car2("Rolls-Royce", "Phantom", "Petrol", 9.8f, 450000);
    car2.displayData();
return 0;
}