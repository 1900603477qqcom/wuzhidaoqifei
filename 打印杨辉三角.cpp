#include <stdio.h>
#define N 10

int main()
{
    int i,j,n,a[N][N]={0};
    scanf("%d",&n);
    //��Ϊ��β��ֵΪ1 
    for(i=0;i<n;i++)
    {
    	a[i][0]=1;
    	a[i][i]=1;
	}
	
	//����������ǵ��м���ֵ 
	for(i=2;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			//������һ����������� 
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		
	}
	//��ӡ	
    for(i=0;i<n;i++)
	{
		//�����ÿһ�пո� 
		for(j=n-1-i;j>0;j--)
			printf(" ");	
		//�����ÿһ��������� 
		for(j=0;j<=i;j++)
			printf("%4d",a[i][j]);
		printf("\n");	
	} 				

    return 0;
}



