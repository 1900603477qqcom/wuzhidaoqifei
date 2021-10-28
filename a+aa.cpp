#include<stdio.h>
int main()
{
    int a,n,i;
    int s=0,l=0;
    scanf("%d %d",&a,&n);
   for(i=a;i<=n;i++)
       l=l*10+i;
    s=s+l;
    printf("%d",s);
    return 0;
}
