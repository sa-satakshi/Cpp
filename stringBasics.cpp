#include<iostream>
#include<string>
using namespace std;

int main(){
    // string s1("Hello");
    // string s2("12345");
    // cout<<s1.insert(2,s2)<<endl;
    // cout<<s2.insert(2,s1)<<endl;

    // cout<<s1.erase(2,4)<<endl;

    // cout<<s1.replace(1,3,"a")<<cout;

    // cout<<s1.append(s2,2,3)<<endl;

    // cout<<s1.length()<<endl;
    // cout<<s1.size()<<endl;

    // cout<<s1.begin()<<endl;
    // cout<<s1.end()<<endl;

    // cout<<s1.find('l')<<endl;
    // cout<<s1.find('m')<<endl;
    // cout<<s1.rfind('l')<<endl;

    // cout<<s1.substr(1,3)<<endl;

    // swap(s1,s2);
    // cout<<s1<<endl;
    // cout<<s2<<endl;

    // string s = " ";
    // cout<<s.empty()<<endl;
    // cout<<s1<<endl;
    // cout<<s2.empty()<<endl;

    // cout<<s1.max_size()<<endl;

    // string a1("aCrome");
    // string a2("bcme");
    // cout<<a1.compare(a2)<<endl;   //a1>a2 -- -1
    // cout<<a2.compare(a1)<<endl;   //a2>a1 -- 1
    // cout<<a1.compare(4,2, a2 ,2, 2)<<endl;
    // cout<<<<endl;

    // string s ="Hello World";
    // string* p1;
    // p1 = &s;
    // cout<<p1<<" "<<s<<endl;

    char a = 'a';
    char* p;
    p = &a;
    char** p1;
    cout<<*p<<" "<<p1<<" "<<**p1<<endl;

    return 0;
}