#include<iostream>   //include-Preprocessor directive. used to include files <iostream>-Header file for taking input and printing output
using namespace std;  //

int main(){        //The execution of code begins from main function(mandatory for any program)

    int a;         //variable declaration
    a=12;          //initialisation

    cout<<"Size of int "<<sizeof(a)<<endl;  // cout-used to display output

    float b;
    cout<<"Size of float\n"<<sizeof(b)<<endl;  //\n- new line break

    char c;
    cout<<"Size of char "<<sizeof(c)<<endl;  //;- marks the end of statement

    bool d;
    cout<<"Size of bool "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of short int "<<sizeof(si)<<endl;
    cout<<"Size of long int "<<sizeof(li)<<endl;
    return 0;  // exit status of a function

} // curly braces indicate the start and end of a function