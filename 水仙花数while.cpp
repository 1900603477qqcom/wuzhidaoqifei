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
			//  第一步：判断当前的i是否为水仙花数
			int sum = 0;
			int other = i;
			while(other != 0)
			{
				sum += pow(other%10,3);
				other /= 10;
			}
			//   第二步:做对应操作
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

