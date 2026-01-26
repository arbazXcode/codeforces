#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int> >arr(5, vector<int>(5));
    int x = 0, y = 0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];

            if(arr[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int result = abs(x - 2) + abs(y - 2);
    cout<<result<<endl;

    return 0;
}