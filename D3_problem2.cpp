#include<iostream>

using namespace std;

int factorial(int x){
    int sum = 0;
    int fact = 1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
        sum=sum+ fact/i;

    }
    return sum;
};

int main(){
    int n;
    cout<<"Enter n= ";
    cin>>n;
    factorial(n);

    return 0;
}
