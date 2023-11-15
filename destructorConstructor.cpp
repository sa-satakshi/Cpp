#include<iostream>
using namespace std;

class Student{
    public:
    student(){
        cout<<"Constructor Initialized"<<endl;
    }
    ~Student(){
        cout<<"Destructor Initialized"<<endl;
    }
};
int main(){
    Student s;
    return 0;

}