#include<iostream>
using namespace std;


int main()
{   
    int n;
    cin>>n;
    int star = 1;
    int space = (n/2);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=space;k++){
           cout<<" ";
       }
       for(int j=1;j<=star;j++){
           cout<<"*";
       }
       if(i<((n/2)+1)){
         space--;
         star = star + 2;
       }
       else{
        space++;
        star = star-2;
       }
       cout<<endl;
    }
    return 0;
}