#include<stdio.h>
int main()
{
    int i,n;
    int a[40]={1,1};
            printf("%d %d",a[0],a[1]);
    scanf("%d",&n);
    if(n>=1&&n<=40){
        for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];

        printf(" %d",a[i]);}
        
    }
    return 0;
}
