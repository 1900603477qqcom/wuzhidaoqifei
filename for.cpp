#include<stdio.h>
#include<math.h>
int main()
{int  t,x;
double y;

scanf("%d",&x);
if(1<=x<=10)
{for(t=1;t<=x;t++)
{
y=sqrt(t);
printf("%.2lf\n",y);

}
}
return 0;
 } 
