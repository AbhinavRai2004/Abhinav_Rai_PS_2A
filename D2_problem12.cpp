#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l2 = n-1;
    int space = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1)-i;j++){
            cout<<j<<" ";
        }
        for(int k=1;k<=space;k++){
            cout<<"  ";
        }
        for(int p =l2;p>=1;p--){
            cout<<p<<" ";
        }
        if(i==1){
        space++;
        }
        if(i>1){
        space+=2;
        l2--;
        }
        cout<<endl;
    }
    return 0;
}