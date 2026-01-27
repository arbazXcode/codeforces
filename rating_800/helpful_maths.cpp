#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    string temp = "";

    for(auto &it : s){
        if(it != '+'){
            temp += it;
        }
    }
    sort(temp.begin(), temp.end());
    string result = "";

    for(int i=0; i<temp.length()-1; i++){
        result += temp[i];
        result += '+';
    }
    result += temp[temp.length()-1];
    cout<<result<<endl;
}