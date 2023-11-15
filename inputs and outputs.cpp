#include<iostream>       //Header file to take input and print output
using namespace std;

int main(){              //marks the begenning of execution
    int amount1;
    cin>>amount1;           //>>-extraction operator

    int amount2;
    cin>>amount2;

    int sum=amount1+amount2;
    cout<<sum;               //<<-insertion operator
    
    return 0;
}