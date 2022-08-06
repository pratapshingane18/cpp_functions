#include<bits/stdc++.h>
// #define INT_MAX
using namespace std;

int CeilRight(int arr[]){
    for(int i =0; i < 5; i++){
        int diff = INT_MAX;
        for (int j = i+1; j < 5; j++)
        {
           if(arr[j] > arr[i]){
            diff = min(diff, arr[j] - arr[i]);

           }
        }

        if(diff == INT_MAX){
            cout<<-1<<endl;
        }
        else{
            cout<<arr[i] + diff<<endl;
        }
        
    }

}


int main(){
    int arr[5] ={40,30,20,10,15};
    CeilRight(arr);

    
    
}