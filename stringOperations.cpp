// #include<iostream>
// using namespace std;
// int main(){
//     string s1("Hello");
//     string s2("World");
    // cout<<s1.insert(4, s2)<<" "<<endl;
    // cout<<s2.insert(2,s1)<<endl;

    // cout<<s1.erase(2,4)<<endl;

    // cout<<s1.replace(1,3,"a")<<endl;

    // cout<<s1.append(s2,2,3)<<endl;

    // cout<<s1.length()<<endl;
    // cout<<s1.size()<<endl;
    // cout<<" At: ";
    // cout<<s1.at(2)<<endl;
    

    // cout<<s1.find('l')<<endl;
    // cout<<s1.find('m')<<endl;
    // cout<<s1.rfind('l')<<endl;
    // cout<<"substr: ";
    // cout<<s1.substr(1,3)<<endl;

    // swap(s1,s2);
    // cout<<s1<<endl;
    // cout<<s2<<endl;
  
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    return 0;
}

