#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream of("result.txt");
    of<<"hello";
    of.close();
    cout<<"data Saved\n";
}