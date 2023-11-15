#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int age;
    char gender;

    void printInfo(){
        for(int i = 0; i < 3; i++){
            cout<<"Name: ";
            cout<<arr[i].name<<endl;
            cout<<"Age: ";
            cout<<arr[i].age<<endl;
            cout<<"Gender: ";
            cout<<arr[i].gender<<endl;;
        }
    }
};
int main(){
    student arr[3];
    for(int i = 0; i < 3; i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }
    for(int  i = 0 ; i < 3; i++){
        arr[i].printInfo();
    }
    return 0;
}