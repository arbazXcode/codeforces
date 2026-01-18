#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    if(N & 1){
        cout<<"Odd"<<endl;
    }else{
        cout<<"Even"<<endl;
    }
    return 0;
}