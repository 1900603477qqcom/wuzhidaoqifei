#include<stdio.h>
int main(){
    int n,m,i,j,a[100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    for(i=0;i<n;i++){
        if(i==n-1){
printf("%d",a[i]);}else
        {  printf("%d ",a[i]);
}
      
        
    }
    return 0;
}
