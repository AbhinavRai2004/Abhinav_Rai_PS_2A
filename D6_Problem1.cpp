#include<bits/stdc++.h>

using namespace std;
// PROBLEM 1 -->

// Matrix rotation clockwise  at 90 degrees.

int main()
{
    int n;
    cin>>n;
    int m[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
             cin>>m[i][j];
        }
    }
    
    for(int j = 0 ; j<n ; j++){
        for(int i = n-1 ; i>=0 ; i--){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
