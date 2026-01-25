#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int result = m * (n/2);

    if(n % 2){
        result += m/2;
    }
    cout<<result<<endl;

    return 0;
}