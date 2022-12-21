#include <bits/stdc++.h>
using namespace std;

// PROBLEM 4 -->

// Matrix Rotation at 180 Degrees.

int main()
{
    int n;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    for(int i = n-1;i>=0;i--){
        for(int j = n-1;j>=0;j--){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}