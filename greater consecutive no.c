#include<stdio.h>
int main()
{
    int num,n[10],i,j;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
     scanf("%d",&n[i]);
    for(i=1;i<num;i++)
     printf("%d\t",n[i]>n[i+1]?n[i]:n[i+1]);
     return 0;
}
