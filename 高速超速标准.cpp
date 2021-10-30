#include<stdio.h>
int main(){
	int a,b;
	double r;
	scanf("%d%d",&a,&b);
	r=(a-b)/(b*1.0)*100;
	if(r<10){
		printf("OK");
	
	}
	else if(r<50){
		printf("Exceed %.0lf%. Ticket 200 ",r);
	} 
	else
	printf("Exceed %.0lf%. License Revoked",r);
	return 0;
	}
