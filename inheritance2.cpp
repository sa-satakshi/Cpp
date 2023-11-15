#include<iostream>
using namespace std;

class teacher{
    int a, b;
    protected:
        int c, d;
    public:
        int e;
};
// class student: private teacher{
class student: public teacher{
// class student: protected teacher{

    int num1;
    protected:
    int num2;
    public:
    // c;
    // d;
    // int num3;
    void show(){
        cout<<e;
    }

    
};
int main(){
    student s;
    // s.a;
    // s.b;
    s.c;
    s.d;
    s.e;
}