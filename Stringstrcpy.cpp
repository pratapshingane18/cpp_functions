// strcpy: Copies source string to the destination string. Here also the 1st parameter is the destination string and the 2nd is the source string.

// Used strlen and also covert lower string to upperstring

#include<bits/stdc++.h>
using namespace std;

int main(){
    char str1[100] ;
    char str2[] = "Life is Beautiful";

    cout<<strcpy(str1,str2)<<endl;

    cout<<"Source String:"<<endl<<str2<<endl;
    cout<<"Destination string:"<<endl<<str1<<endl;
    return 0;
}