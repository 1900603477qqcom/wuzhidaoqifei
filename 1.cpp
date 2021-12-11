#include<stdio.h>
int main()
{
	int n,m,a,s=0,i;               //定义变量 
	scanf("%d %d %d",&n,&m,&a);    //输入 
	if(m<n){
		int p=n;
		    n=m;
		    m=p;	    
	}
	for(i=n;i<=m;i++)              //循环编译 
	{
		if(i%a==0)                 //判断条件 
		s+=i;                     //求和 
	}
	printf("%d",s);               //输出 
	return 0;
}
