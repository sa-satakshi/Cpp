 #include <iostream>
 #include<string>
 using namespace std;
struct emp{
    string name;
};
int main(){
    emp abc[5];
    int i;
    for(i = 0; i < 5; i++ ){
        cout<<"Enter name of the employee: "<<endl;
        cin>>abc[i].name;
    }
    for(i = 0; i < 5; i++ ){
        cout<<abc[i].name<<endl;
        }
    return 0;
}