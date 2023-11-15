#include<iostream>
using namespace std;
//Derived class(child)- the class that inherits from another class
//base class(parent) - the class being inherited from
//types of inheritance - single, multiple, multilevel, hybrid, hieirarchical

//single inhertiance
// class A{
//     public:
//     void func(){
//         cout<<"Inherited";
//     }
// };
// class B: public A{
// public:
// };
// int main(){
//     B.b;
//     b.func();
//     return 0;
// }


//multiple inheritance
// class A{
//     public:
//         void Afunc(){
//             cout<<"Function A"<<endl;
//         }
// };
// class B{
//     public:
//         void Bfunc(){
//             cout<<"Function B"<<endl;
//         }
// };
// class C: public A, public B{
//     public:
// };
// int main(){
//     C c;
//     c.Afunc();
//     c.Bfunc();
//     return 0;
// }


//multilevel inheritance
// class A{
//     public:
//     void Afunc(){
//         cout<<"Function A"<<endl;
//     }
// };
// class B: public A{
//     public:
//     void Bfunc(){
//         cout<<"Function B"<<endl;
//     }
// };
// class C:public B{
//     public:
// };
// int main(){
//     C c;
//     c.Afunc();
//     c.Bfunc();

//     return 0;
// }
