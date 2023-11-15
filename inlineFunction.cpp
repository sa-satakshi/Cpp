#include<iostream>
using namespace std; 
class Operarion{
   int a, b, mul, cub;
   public:
   void get(){                             
      cout<<"Enter an integer: "<<endl;
      cin>>a;
      cout<<"Enter an integer: "<<endl;
      cin>>b;
   }
   void mul(){
      mul = a*b;
      cout<<"Multiplication value is:  "<<a*b<<endl;
   }
   void cub(){
   cub = a*a*a;
   cout<<"Cubic values are:  "<<a*a*a<<endl;
   }
}s;

int main(){
   s.get();
   s.mul();
   s.cub();
   return 0;
}