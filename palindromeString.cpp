#include <iostream>  
#include <string>  
using namespace std;  
int main()  
{  
    string s;
    cin>>s;
    string p = s;

    string reverse(p.begin(), p.end());

    if(s == p){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    return 0;  
}  