#include<iostream>
using namespace std;

int main(){
    long long N;
    cin>>N;

    int result = 0;


    while(N != 0){
       int rem = N % 10;
       result = result * 10 + rem;
       N /= 10;
    }
    cout<<result<<endl;
    return 0;
}