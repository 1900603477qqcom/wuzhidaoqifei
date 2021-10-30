#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    double item=1,sum=0,d=1;
    int i,j;
    scanf("%lf",&x);
    while(item>=0.00001){
        sum+=item;
        j++;
        d=1;
    
        for(i=1;i<=j;i++){
        d=d*i;}
   
    item=pow(x,i)/d;
    }
    sum=sum+item;
    printf("%.4lf",sum);
    return 0;
}
