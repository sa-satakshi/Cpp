#include<iostream>
#include<queue>
using namespace std;
void print(priority_queue<int> pq){
    while(pq.size() != 0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
int main(){
    priority_queue<int> p1;
    priority_queue<int> p2;
    p1.push(34);
    p1.push(35);
    p1.push(55);
    p1.push(58);

    p2.push(44);
    p2.push(65);
    p2.push(36);

    cout<<"Swapping: ";
    p1.swap(p2);
    print(p1);
    print(p2);
    // cout<<p1.top();
    cout<<"Size of the priority queue: "<<p1.size()<<endl;
    print (p1);
    p1.pop();
    p1.emplace(100);
    print (p1);
    if(p1.empty()){
        cout<<"Queue is empty";
    }else{
        cout<<"Queue is not empty";
    }
    cout<<"Size of the priority queue: "<<p1.size();
    return 0;
}
