#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Enter a character"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"hi"<<endl;
        break;
    case 'c':
        cout<<"namaste"<<endl;
        break;
    case 'd':
        cout<<"salam"<<endl;
        break;
    case 'e':
        cout<<"bonjour"<<endl;
        break;
    case 'f':
        cout<<"ciao"<<endl;
        break;
    
    default:
        cout<<"goodbye"<<endl;
        break;
    }
    return 0;
}