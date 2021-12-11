#include <stdio.h> 
int main()
{
	int n,m,sum=0;
	int i,j;
	scanf("%d %d",&n,&m);
	if(m<n){           //判断并交换 m n 
		int p=n;
		    n=m;
		    m=p;
	}
	for(i=n;i<=m;i++)       //开始在俩个数之间循环
	{
		for(j=2;j<=i;j++)   //找出能整除的数
		{
			if(i%j==0) 
			  break;                //找到了就打破内循环
		}
		if(j==i)               //如果找出的数与本身相等，说明这个数是素数 
		{
			sum+=i;
	
		}
	}
	printf("%d",sum);
	return 0;
}

