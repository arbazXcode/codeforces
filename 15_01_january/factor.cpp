#include<iostream>
using namespace std;

int main(){
    int N,F;
    cin>>N>>F;

    if(N % F == 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}