#include<stdio.h>
int main()
{
    double x,y,i,z;
  long n;
    scanf("%lf",&x);
 
        i=x;
       y=0;

	
        n=x/100;
        i=x-(50*n);
        y=50*n;
 
    printf("%.2lf\n%.2lf",y,i);
    return 0;
}
