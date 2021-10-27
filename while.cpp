#include<stdio.h>
main()
{
int max,min,a;
max=-1;
min=1000;
scanf("%d",&a);
while(a)
{
scanf("%d",&a);
if(a<0)break;
if(max<a)max=a;
if(min>a)min=a;
}
printf("max=%d,min=%d",max,min);
return 0;
}

