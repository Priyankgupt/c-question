#include<stdio.h>
int main()
{
  int i,j,n,k;
  printf("enter your limit");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=i-1;j++)
      {
          printf(" ");

      }
      for(k=1;k<=n+1-i;k++)
      {
          printf("*");
      }
        printf("\n");
  }
}
