#include<iostream>
using namespace std;

int main(){
    int A,B,C;

    cin>>A>>B>>C;

    if(A < B && A < C){
        cout<<"Min = "<<A<<endl;
    }else if(B < A && B < C){
        cout<<"Min = "<<B<<endl;
    }else{
        cout<<"Min = "<<C<<endl;
    }

    if(A > B && A > C){
        cout<<"Max = "<<A<<endl;
    }else if(B > A && B > C){
        cout<<"Max = "<<B<<endl;
    }else{
        cout<<"Max = "<<C<<endl;
    }
    return 0;
}