#include<iostream>
using namespace std;
class Engine{
    public:
        void start(){

        }
};
class Car{
    public:
        Car(): Engine(new Engine()){
            void startCar(){
                Engine->Start();
            }
    private:
        Engine* Engine;
        }
};
int main(){
    Car car;
    car.startCar();
    return 0;
}