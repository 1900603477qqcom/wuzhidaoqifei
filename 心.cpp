#include<stdio.h>
#include<windows.h>

int main()
{
	float x,y,a,i;
//	scanf("%d",&i);
//	if(i == 6){
	for(y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(x=-1.5f;x<1.5f;x+=0.05f){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
			
		}
		Sleep(100);
		putchar('\n');
	}
	system("mspaint queen.jpg");
	getchar();
	return 0;
}
