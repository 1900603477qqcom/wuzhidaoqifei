#include<stdio.h>
#include<math.h>
int main()
{
	int M;
	int N;
	scanf("%d %d",&M,&N);
	if(M>=100 && M<N && N<=999)
	{
		for(int i = M; i <= N;i++)
		{
			//  ��һ�����жϵ�ǰ��i�Ƿ�Ϊˮ�ɻ���
			int sum = 0;
			int other = i;
			while(other != 0)
			{
				sum += pow(other%10,3);
				other /= 10;
			}
			//   �ڶ���:����Ӧ����
			if(i == sum)
			{
				printf("%d\n",i);
			} 
		} 
	}
	else
	{
		printf("Invalid Value.");
	}

}

