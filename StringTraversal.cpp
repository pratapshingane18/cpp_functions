#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "prat";

    for(int i = 0; i < str.length(); i ++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(auto x: str){
        cout<<x<<" ";
    }
     cout<<endl;
    for(auto itr = str.begin(); itr != str.end(); itr++){
        cout<<(*itr)<<" ";
    }
    return 0;
}