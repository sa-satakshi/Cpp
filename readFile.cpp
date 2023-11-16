#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string s[10];
    ifstream inf("result.txt");
    getline (inf,s);
    inf.close();
    cout<<s;
}