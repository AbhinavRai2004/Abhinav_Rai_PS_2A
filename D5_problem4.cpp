#include<stdio.h>


// Absolute Difference of 1:
 
// Given an array arr of size n.

void main()
{
    int a[100];
    int n,i,j,k,m,h,l,count=0;
    printf("No. of elements= ");
    scanf("%d",&n);
    printf("Enter elements= ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter K= ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            j=a[i];
            while(j>0)
            {
                m=j%10;
                j=j/10;
                if(j==0)
                {
                    continue;
                }
                else
                {
                    l=j%10;
                    if(m-l==-1||m-l==1)
                    {
                        count++;
                    }
                    else
                    {
                        count=0;
                        break;
                    }
                }
            }
            if(count!=0)
            {
                printf("%d ",a[i]);
                count=0;
            }
        }
    }
}