#include <iostream>
using namespace std;

class complex {
    public:
	int x,y;
	complex(){
		x = 0;
		y = 0;
	}
    complex(int a, int b){
        x = a;
        y = b;
    }
	friend complex operator +(complex &c1, complex &c2);

    void show(){
        cout<<x<<" + "<<y<<"i"<<endl;
    }
};


void complex operator + (complex c1, complex c2){
	complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}

int main(){
	complex c1(2,3), c2(4,5), c3;
    c1.show();
    c2.show();
    c3.show();
    c3 = c1 + c2;
    c3.show();

	return 0;
}



this pointer 
operator overloading
constructor/destructor
