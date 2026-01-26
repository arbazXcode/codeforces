#include<iostream>
using namespace std;

int main(){
    string s1,s2;

    cin>>s1>>s2;
    int n = s1.length();

    for(int i=0; i<n; i++){
        char ch1 = tolower(s1[i]);
        char ch2 = tolower(s2[i]);

        if(ch1 < ch2){
            cout<<-1<<endl;
            return 0;
        }else if(ch1 > ch2){
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}