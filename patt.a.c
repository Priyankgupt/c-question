#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter your limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            printf("*");
        }
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
