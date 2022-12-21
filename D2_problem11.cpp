#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space = n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<j;
       }
       for(int k=1;k<=(space-1);k++){
        cout<<" ";
       }
       for(int p=1;p<=(space-1);p++)
        cout<<" ";
       for(int q=i;q>=1;q--){
        cout<<q;
       }
       space--;
    cout<<endl;
    }

    return 0;
}