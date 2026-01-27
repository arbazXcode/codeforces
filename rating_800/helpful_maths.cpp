// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     string temp = "";

//     for(auto &it : s){
//         if(it != '+'){
//             temp += it;
//         }
//     }
//     sort(temp.begin(), temp.end());
//     string result = "";

//     for(int i=0; i<temp.length()-1; i++){
//         result += temp[i];
//         result += '+';
//     }
//     result += temp[temp.length()-1];
//     cout<<result<<endl;
// }






///////// METHOD 2
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char>ch;

    for(int i=0; i<s.length(); i += 2){
        ch.push_back(s[i]); //push all characters not symbol '+'
    }

    sort(ch.begin(), ch.end());

    for(int i=0; i<ch.size(); i++){
        cout<<ch[i];
        if(i != ch.size()-1){
            cout<<'+';
        }
    }
    cout<<endl;
    return 0;

}