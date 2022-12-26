#include<bits/stdc++.h>

using namespace std;

int factorial(int k)
{
    int fact=1;
    for(int i=1;i<=k;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n,x,sign=-1;
    float sum=0;
    cout<<"Enter n =";
    cin>>n;
    cout<<"Enter x =";
    cin>>x;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            sum=sum+sign*(pow(x,i)/factorial(i));
            sign=sign *-1;
        }
    }
    cout <<x + sum;

    return 0;
}
