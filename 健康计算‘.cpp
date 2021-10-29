#include<stdio.h>
int main()
{
    double x,y,n;
    scanf("%lf %lf",&x,&y);
    n=x/(y*y);
    if(n<=25)
        printf("%.1lf\nHai Xing\n",n);
   
        else
        printf("%.1lf\nPANG\n",n);
    
    return 0;
}
