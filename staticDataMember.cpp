#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int rollNo;
    char name[10];
    int marks;
    public:
    static int objectCount;
Student(){
    objectCount++;
}
void getData(){
    cout<<"Enter roll no.: ";
    cin>>rollNo;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Marks: ";
    cin>>marks;
}
void putData(){
    cout<<"Roll number: "<<rollNo<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
}
};

int Student::objectCount = 0;
int main(void){
    Student s1;
    s1.getData();
    s1.putData();
    Student s2;
    s1.getData();
    s1.putData();
    Student s3;
    s1.getData();
    s1.putData();
    cout<<"Total objects created: "<<Student::objectCount<<endl;
}