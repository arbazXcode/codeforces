#include<iostream>
using namespace std;

int main(){
    int n;
    int result = 0, count = 0;
    cin>>n;

    while(n--){
        for(int i=0; i<3; i++){
            int num;
            cin>>num;
            if(num == 1)
                count++;
        }
        if(count >= 2)
            result++;
        count = 0;
    }
    cout<<result<<endl;

    return 0;
}