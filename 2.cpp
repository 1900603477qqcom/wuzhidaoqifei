#include <stdio.h> 
int main()
{
	int n,m,sum=0;
	int i,j;
	scanf("%d %d",&n,&m);
	if(m<n){           //�жϲ����� m n 
		int p=n;
		    n=m;
		    m=p;
	}
	for(i=n;i<=m;i++)       //��ʼ��������֮��ѭ��
	{
		for(j=2;j<=i;j++)   //�ҳ�����������
		{
			if(i%j==0) 
			  break;                //�ҵ��˾ʹ�����ѭ��
		}
		if(j==i)               //����ҳ������뱾����ȣ�˵������������� 
		{
			sum+=i;
	
		}
	}
	printf("%d",sum);
	return 0;
}

