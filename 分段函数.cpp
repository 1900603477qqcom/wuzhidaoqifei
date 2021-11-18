#include<stdio.h>
#include<math.h>
int main()
{
    double x,f=0;
    scanf("%lf",&x);
    if(x<0)
    {
        f=pow(x+1,2)+2*x+1/x;
    }
    else{
        f=sqrt(x);
    }
    printf("f(%.2lf) = %.2lf\n",x,f);
    return 0;
}
