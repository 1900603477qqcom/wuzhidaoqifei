#include<stdio.h>
int main()
{
	int n,m,a,s=0,i;               //������� 
	scanf("%d %d %d",&n,&m,&a);    //���� 
	if(m<n){
		int p=n;
		    n=m;
		    m=p;	    
	}
	for(i=n;i<=m;i++)              //ѭ������ 
	{
		if(i%a==0)                 //�ж����� 
		s+=i;                     //��� 
	}
	printf("%d",s);               //��� 
	return 0;
}
