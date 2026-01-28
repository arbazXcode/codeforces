#include<iostream>
using namespace std;

int main(){
    int n;
    string s;

    cin>>n;
    cin>>s;
    if(n == 1){
        cout<<0<<endl;
        return 0;
    }
    int i=0, j=1, count = 0;

    while(j < s.length()){
        if(s[i] == s[j]){
            count++;
        }
        i++;
        j++;
    }
    cout<<count<<endl;
    return 0;
}