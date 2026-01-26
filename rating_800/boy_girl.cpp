#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char>st;

    for(int i=0; i<s.length(); i++){
        st.insert(s[i]);
    }
    if(st.size() % 2) { //odd
        cout<<"IGNORE HIM!"<<endl;
    }else{
        cout<<"CHAT WITH HER!"<<endl;
    }

    return 0;
}