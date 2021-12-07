#include<stdio.h>

void max_min(int n, int *a);

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d", (a + i));
	} 
	
	max_min(n, a);
	return 0;
}

void max_min(int n, int a[])
{
	int t;//ÁÙÊ±±äÁ¿ 
	for(int i = 0;i < n - 1;i++)
	{
		for(int j = 0;j < n - i - 1;j++)
		{
			if(*(a + j) < *(a + j + 1))
			{
				t = *(a + j + 1);
				*(a + j + 1) = *(a + j);
				*(a + j)= t; 
			}
		}
	}
	printf("max = %d\n", *(a));
	printf("min = %d\n", *(a + n - 1));
	
}

