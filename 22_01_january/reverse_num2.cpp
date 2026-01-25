#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long N;
    cin>>N;

    string str = to_string(N);
    reverse(str.begin(), str.end());
    
    cout<<str<<endl;
    return 0;
}