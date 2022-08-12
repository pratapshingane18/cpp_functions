#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <vector <int>> v(n, vector <int> (n,0));
    vector <vector <int>> ans(n, vector <int> (n,0));

    for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
            int t;
            cin>>t;
            v[i][j] =t;
        }
    }

    for(int i =0; i<n; i ++){
        for(int j =0; j < n; j++){
            cout<<v[i][j]<<" ";
        }
    }

    // Transpose
    cout<<"Transpose of above matrix"<<endl;

    for(int i=0; i <n ; i++){
        for(int j =0; j <n; j++){
            ans[i][j]= v[j][i];

        }
    }

     for(int i=0; i <n ; i++){
        for(int j =0; j <n; j++){
            cout<<ans[i][j]<<" ";

        }
    }



    return 0;
}