#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    // s[0] = toupper(s[0]);
    // cout<<s<<endl;

    if(s[0] >= 'a' && s[0] <= 'z'){
        //convert to uppercase 
        s[0] = s[0] - 'a' + 'A';
    }

    cout<<s<<endl;

    return 0;
}