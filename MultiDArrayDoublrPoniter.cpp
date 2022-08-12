#include<bits/stdc++.h>
using namespace std;

int main(){

    // define dimentions
    int m =3;
    int n=2;

    int **arr; //create double pointer
    
    arr = new int* [m]; //points to array of pointer and its address is stored in arr

    for(int i=0; i<m; i++){
        arr[i] = new int[n]; // now for each element in row we are creating a new array of n items and its addres is stored in i
    }
    for(int i=0; i <m;i++){
        for(int j = 0; j <n; j++){
            arr[i][j] = 10;

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;

}
