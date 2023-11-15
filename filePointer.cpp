#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char s[30];
    ofstream fileout;
    fstream file;
    fileout.open("hello",ios::out);
    fileout.close();
    file.open("hello",ios::in | ios::out);
    cout<<file.tellg();
    cout<<file.tellp();
    file.seekp(6);
    file.seekg(6);
    cout<<file.tellg();
    cout<<file.tellp();
    file>>s;
    cout<<s;
    return 0;
}