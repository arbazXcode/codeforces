#include<iostream>
using namespace std;

int main(){
    long long N;
    cin>>N;

    string str = to_string(N);
    int n = str.length();
    int i = 0, j = n-1;
    bool flag = true;

    while(i <= j){
        if(str[i] != str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}