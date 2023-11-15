 //wap to find  if a number is prime or not
 #include<iostream>
 using namespace std;

 int main(){
    
    int n;
    cin>>n;

    for(int i = 2;i <= n-1; i++){
        if(n % i == 0){
            cout<<"non-Prime"<<endl;
            break;
        }else{
        cout<<"prime"<<endl;
        }
    }
    return 0;
 }