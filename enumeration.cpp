#include<iostream>
using namespace std;

int main(){
    enum days{sun,mon,tues,wed,thurs,fri,sat};
    days day1, day2;
    day1 = sun;
    day2 = fri;
    cout<<"Day1: "<<day1<<"\t\t"<<"Day2: "<<day2<<endl;
    if(day1>day2){
        cout<<"Day1 comes after Day2"<<endl;
    }else{
        cout<<"Day1 comes before Day2"<<endl;
    }
    return 0;
}