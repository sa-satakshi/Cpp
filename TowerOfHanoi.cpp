#include<iostream>
#include<conio.h>
using namespace std;


void TOH(int d, char t1,char t2, char t3){
    if(d == 1){
        cout<<"Shift top disk from tower"<<t1<<" to tower "<<t2<<endl;
        return;
    }

TOH(d-1, t1, t3, t2);
cout<<"Shift top disk from tower"<<t1<<" to tower "<<t2<<endl;
TOH(d-1,t1,t3,t2);
}

int main(){
    int disk;
    cout<<"There the number of disks: ";
    cin>>disk;
    if(disk<1){
        cout<<"There are no disks to shift";
    }else{
        cout<<"There are "<<disk<<" disks in tower 1\n";
    }TOH(disk, 'A', 'B', 'C');
    cout<<"\n\n"<<disk<<"disks in tower 1 are  shifted to tower 2";

    return 0;
}