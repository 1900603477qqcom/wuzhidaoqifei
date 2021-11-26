#include<stdio.h>
int main()
{
    int n,i,j,a[100][100];
    scanf("%d",&n);
   // printf("%d\n",n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
           for(i=0;i<n;i++){
               for(j=0;j<n;j++){
                   if(i==j){
                       printf("%d",a[i][j]);
                      if(i!=n-1&&j!=n-1){
                      printf(" ");}
                   }
               }
           }
    printf("\n");
    for(i=n;i>=0;i--){
               for(j=n;j>=0;j--){

                   if(i+j==n-1){
                       printf("%d",a[i][j]);
                  if(i!=0&&j!=n){
                  printf(" ");}
                 }
               }
           }
    printf("\n");
    return 0;
}
