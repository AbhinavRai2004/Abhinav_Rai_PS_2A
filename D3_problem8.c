#include<stdio.h>

void main()
{
    int i, n;
    int sum = 0;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*(i+1)*(i+2);
    }
    printf("%d",sum);
}