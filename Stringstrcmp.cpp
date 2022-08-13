// strcmp: Performs lexicographical comparison between 2 strings. The function returns an integer.
// = 0 (if both strings are equal)
// > 0 (if 1st string appears after 2nd string in lexicographical order)
// < 0 (if 1st string appears before 2nd string in lexicographical order

// Used strlen and also covert lower string to upperstring

#include<bits/stdc++.h>
using namespace std;

int main(){
    char str1[] = "abc";
    char str2[] = "abcd";
    char str3[] = "abb";

    cout<<strcmp(str1,str2)<<endl;
    cout<<strcmp(str2,str3)<<endl;
    cout<<strcmp(str1,str3)<<endl;
    return 0;
}