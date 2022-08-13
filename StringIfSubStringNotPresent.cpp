#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    
    int res = str.find("aman");
    if(res == string::npos)
        cout << "Not Present\n";
    else
        cout << "First Occurence at index " << res;
    
    return 0;
}