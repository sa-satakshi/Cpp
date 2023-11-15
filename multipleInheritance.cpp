#include<iostream>
using namespace std;

class teacher{
    int a, b;
    protected:
        int c, d;
    public:
        int e;
};
class parent{
    protected:
	int f;
	public:
	int g;

};

class student: public teacher, protected parent{
	
};

int main(){
    student s;
    s.c;
    s.d;
    s.e;
	s.f;
	s.g;
}