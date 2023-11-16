#include<iostream>
using namespace std;

class B{
    protected:
        int x;
    public:
        void get_dataB(){
            cout<<"Enter value of x : "<<endl;
            cin>>x;
        }
};

class DB1:public virtual B{
    protected:
        int y;
    public:
        void get_dataDB1(){
            cout<<"Enter value of y : "<<endl;
            cin>>y;
        }
};

class DB2: public virtual B{
    protected:
        int z;
        public:
        void get_dataDB2(){
            cout<<"Enter the value of z: "<<endl;
            cin>>z;
        }
};
class D: public DB1, public DB2{
    public:
        void sum(){
            int result;
            result = x + y + z;
            cout<<"Result is : "<<result<<endl;
        }
};

int main(){
    D ob;
    // ob.get_dataB;
    ob.get_dataDB1();
    ob.get_dataDB2();
    ob.sum();

    return 0;
}