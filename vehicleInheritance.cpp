#include<iostream>
using namespace std;
class Vehicle{
    public:
    int mileage;
    float price;
};
class Car: public Vehicle{
    public:
    int warrant;
    int seating;
};
class Bike: public Vehicle{
    public:
    int cylinder;
    int gear;
};
class Audi: public Car{
    public:
    int model_type;
};
class Ford: public Car{
    public:
    int model_type;
};
class Bajaj: public Bike{
    public:
    int make_type;
};
class TVS: public Bike{
    public:
    int make_type;
};

int main(){
    Audi a1;
    
    cin>>a1.model_type>>a1.warrant>>a1.seating;
    cout<<"Model Type: "<<a1.model_type<<endl;
    cout<<"Warrant: "<<a1.warrant<<endl;
    cout<<"Seating capacity: "<<a1.seating<<endl;
    
    Ford a2;
    cin>>a2.model_type>>a2.warrant>>a2.seating;
    cout<<"Model Type: "<<a2.model_type<<endl;
    cout<<"Warrant: "<<a2.warrant<<endl;
    cout<<"Seating capacity: "<<a2.seating<<endl;

    Bajaj b1;
    cin>>b1.make_type>>b1.cylinder>>b1.gear;
    cout<<"Make Type: "<<b1.make_type<<endl;
    cout<<"Cylinder: "<<b1.cylinder<<endl;
    cout<<"Gear: "<<b1.gear<<endl;

    TVS b2;
    cin>>b2.make_type>>b2.cylinder>>b2.gear;
    cout<<"Make Type: "<<b2.make_type<<endl;
    cout<<"Cylinder: "<<b2.cylinder<<endl;
    cout<<"Gear: "<<b2.gear<<endl;


    return 0;
}