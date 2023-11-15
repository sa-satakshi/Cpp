#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
    public:
    int age;
    char gender;
    student(string s){
        name = s;
    }

    void setname(string s, int age, int g){
        name = s;
        age = a;
        gender = g;
    }
    void getname(){
        cout<<name<<endl;
    }
    void printinfo(){

    }
   
};
int main(){
    student a("Ali", 20, );
    a.printinfo();
    return 0;
}