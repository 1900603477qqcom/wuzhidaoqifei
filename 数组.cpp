#include<stdio.h>
int main()
{
    int m=0,i=0,j=0,a[10];
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",a[i]);
        
    }
    printf("%d",a[0]);
    for(i=1;i<m;i++){
        for(j=0;j<i;j++){
            if(a[i]=a[j]){
                break;
            }
        }
        if(i==j){
            printf("%d",a[i]);
        }
    }
    return 0;
}
