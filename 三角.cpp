#include<stdio.h>
int main()
{
int n,i,j;
    char ch;
     scanf("%d",&n);

  
    for(i=0;i<n;i++){
        for(j=n-i;j>1;j--)//¿Õ¸ñÊý
         printf(" ");
       for(j=1;j<=i*2+1;j++)//ÐÇºÅÊý
            printf("*");
        printf("\n");
      
    }
     return 0;
}
