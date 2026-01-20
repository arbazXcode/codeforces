#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string result = "";

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int len = s.length();

        if(len > 10){
            char firstChar = s[0];
            char lastChar = s[len-1];
            int middleCount = len-2;
            cout<<firstChar + to_string(middleCount) +  lastChar<< endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}