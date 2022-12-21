#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int star = n;
    int space =0;
    for(int i=1;i<=n;i++){
         for(int k=1;k<=space;k++){
            cout<<"  ";
        }
        for(int j=1;j<=star;j++){
            cout<<"*"<<" ";
        }
       
        if(i<((n/2)+1)){
            star-=2;
            space++;
        }
        else{
            star+=2;
            space--;
        }
        cout<<endl;
    }
    return 0;
}