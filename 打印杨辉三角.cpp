#include <stdio.h>
#define N 10

int main()
{
    int i,j,n,a[N][N]={0};
    scanf("%d",&n);
    //先为首尾赋值为1 
    for(i=0;i<n;i++)
    {
    	a[i][0]=1;
    	a[i][i]=1;
	}
	
	//计算杨辉三角的中间数值 
	for(i=2;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			//等于上一行两个数相加 
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		
	}
	//打印	
    for(i=0;i<n;i++)
	{
		//先输出每一行空格 
		for(j=n-1-i;j>0;j--)
			printf(" ");	
		//在输出每一行杨辉三角 
		for(j=0;j<=i;j++)
			printf("%4d",a[i][j]);
		printf("\n");	
	} 				

    return 0;
}



