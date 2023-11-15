#include<iostream>
using namespace std;

int main(){
    int date;
    cin>>date;
    for (date = 1; date <= 31; date++){
        if (date % 2 == 0){
            cout<<"Can't go out"<<endl;
            break;
        }else{
            cout<<"go out"<<endl;
        }
    }
    return 0;
}