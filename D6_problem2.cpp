#include<bits/stdc++.h>

using namespace std;
// PROBLEM 2 -->

// Matrix rotation anti-clockwise at 90 degrees.

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
    
    for(int j = n-1 ; j>=0 ; j--){
        for(int i = 0 ; i<n ; i++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}