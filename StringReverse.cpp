// Used strlen and also covert lower string to upperstring

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="aman";
    string newstr;
    for(auto x:str){
        cout<<x;
    }
    for(int i = (str.length()-1); i >=0; i--){
        newstr = newstr + str[i];
    }
    cout<<endl;
    for(auto x:newstr){
        cout<<x;
    }
    
    return 0;
}