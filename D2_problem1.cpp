#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
        int count = i;
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}