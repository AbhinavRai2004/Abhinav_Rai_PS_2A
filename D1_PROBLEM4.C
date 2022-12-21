#include<stdio.h>
void main(){
    int yrs;
    printf("enter the year= ");
    scanf("%d",&yrs);
    if((yrs % 400 ==0)|| ((yrs % 4 == 0)&&(yrs % 100 != 0)))
    {
        printf("leap year");
    }
    else
        printf(" not a leap year");
}