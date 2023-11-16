#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        float fees;
    public:
        Student(int a, float m){
            rollno = a;
            fees = m;
        }
        operator int(){
            return (rollno);
        }
        operator float(){
            return (fees);
        }
};

int main(){
    int j;
    float f;
    Student st(5,4200.5);
    j = st;   //operator int() is called
    f = st;   //operator float() is called
    cout<<"\nValue of j : "<<j<<"\n";
    cout<<"\nValue of f : "<<f<<"\n";
}