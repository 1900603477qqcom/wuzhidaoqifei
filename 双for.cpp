#include<stdio.h>
int main()
{
    int M,N;
    int i,j,f;
    int c=0;
    int s=0;
    scanf("%d %d",&M,&N);
   for(i=M;i<=N;i++)
   {
       for(j=2;j<=i;j++){
           if(i%j==0)break;
       }
       if(j==i){
           s+=i;
           c+=1;
       }
   }
        printf("%d %d",c,s);
    return 0;
}
