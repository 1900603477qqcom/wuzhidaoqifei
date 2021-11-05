#include<stdio.h>
int main()
{
    int m,n,count,i;
   count=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
     if(i%3==0&&i%5!=0)
     {
         count++;
         printf("%d ",i);
     }
    }
    if(i=n){
        printf("\n");
    }
    printf("count=%d",count);
}
