#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    int sum = 0;
    int fact = 1;
    cout<<"Enter n =";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    cout<<"Sum = "<<sum;
    
    return 0;
}
