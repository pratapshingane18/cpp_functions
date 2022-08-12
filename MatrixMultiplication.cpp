#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector <vector<int>> mat1(n, vector<int> (n,0));
    vector <vector<int>> mat2(n, vector<int> (n,0));
    vector <vector<int>> res(n, vector<int> (n,0));

     for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
            int t;
            cin>>t;
            mat1[i][j] = t;

        }
    }

    cout<<"Matrix 1 is :"<<endl;

    for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
            cout<<mat1[i][j]<<" ";

        }
    }
    cout<<endl;

    for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
            int t;
            cin>>t;
            mat2[i][j] = t;
            
        }
    }

    cout<<"Matrix 2 is :"<<endl;

    for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
            cout<<mat2[i][j]<<" ";

        }
    }

    cout<<endl;

    for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
            res[i][j]=0;
           for(int k = 0; k <n; k++)
           res[i][j]= res[i][j] + (mat1[i][k] * mat2[k][j]);
        }
    }
    cout<<"Matrix Multiplication of above Matrix is::"<<endl;

    for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
         cout<<res[i][j]<<" ";
        }
    }
    

    return 0;
}