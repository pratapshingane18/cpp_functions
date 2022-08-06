#include<bits/stdc++.h>
using namespace std;

// {10,20,30,40,50}
void CeilingRight(int arr[]){
    set <int> s; // defining set
    int res[5];  //forming resulting array

    for(int i = 4; i >= 0; i--){
        auto it = s.lower_bound(arr[i]);
        if(it == s.end()){
            res[i] = -1;

        }
        else{
            res[i]= *it;

        }

        s.insert(arr[i]);
         }

        for (int i = 0; i < 5; i++)
        {
            cout<<res[i]<<" ";
        }
}

int main(){
    int arr[5]={10,20,30,40,50};
    CeilingRight(arr);
    return 0;
}