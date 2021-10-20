#include<stdio.h>
#include<math.h>
int main ()
{
	double x,result;
	scanf("%lf",&x);
	if(x>=0){
	result=sqrt(x);
		}
		else
		{
		result=pow(x+1,2)+2*x+1/x;
		}
		printf("result = f(%.2lf)=%.2lf\n",x,result);
		return 0;
}
