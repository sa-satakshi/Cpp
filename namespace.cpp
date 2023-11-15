#include<iostream>
using namespace std;
namespace first{
    int value_1 = 200;
}
namespace second{
    int value_2 = 201;
}
int main(){
    cout<<first::value_1<<endl;
    cout<<second::value_2<<endl;
    return 0;
}
