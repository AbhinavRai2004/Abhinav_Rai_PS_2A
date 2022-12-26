#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,n,x,fact=1;
    float sum=0;
    cout<<"Enter n =";
    cin>>n;
    cout<<"Enter x =";
    cin>>x;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        if(i%2!=0)
        {
            sum = sum - pow(x,i)/fact;
        }
        else
            sum = sum + pow(x,i)/fact;
    }
    cout<<1+sum;
}