// Palindrome in simple word is when we revrse a string it should be same

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int start = 0;
    int end = s.length() -1;


    while(start < end){
        if(s[start] != s[end]){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            start++;
            end--;
        }

     
    }
    cout<<"YES"<<endl;

    
    return 0;
}