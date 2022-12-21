#include<iostream>
using namespace std;
int main()
{
    for(char i='A';i<='D';i++){
        char alp = i;
        for(char j='A';j<=i;j++){
           cout<<alp;
           alp++;
        }
        cout<<endl;
    }
    return 0;
}