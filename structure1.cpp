#include<iostream>
using namespace std;

struct employee{
    char name[50];
    int age;
    float salary;
};
int main(){
    employee el;
    cout<<"Enter full name: ";
    cin.get(el.name,50);
    cout<<"Enter age: ";
    cin>>el.age;
    cout<<"Enter salary: ";
    cin>>el.salary;
    cout<<"\nDisplaying information:-"<<endl;
    cout<<"Name: "<<el.name<<endl;
    cout<<"Age: "<<el.age<<endl;
    cout<<"Salary: "<<el.salary;
    return 0;
}
//try this program using for loop and take multiple inputs.