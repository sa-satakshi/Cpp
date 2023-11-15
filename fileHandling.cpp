#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char data[100];
    ofstream output_file;
    output_file.open("temp.txt");
    cout<<"Writing text to the file"<<endl;
    cout<<"Enter your name: ";
    cin.getline(data, 100);
    output_file<<data<<endl;
    cout<<"Enter your age: ";
    cin>>data;
    cin.ignore(
    );
    output_file.close();
    
    ifstream input_file;
    input_file> ;
    cout<<data<<endl;
    input_file >> data;
    cout<<data<<endl;
    input_file.close();
    return 0;
}