 #include<iostream>
 using namespace std;

 int main(){
    int savings;
    cin>>savings;
    if (savings>5000){
        if (savings>10000){
            cout<<"Road Trip"<<endl;
        }else{
            cout<<"Mall"<<endl;
        }
    } else if(savings>2000){
        if (savings>800){
            cout<<"market"<<endl;
        }else{
            cout<<"food"<<endl;
        }
    }else{
        cout<<"Friends"<<endl;
    }
 return 0;
 }