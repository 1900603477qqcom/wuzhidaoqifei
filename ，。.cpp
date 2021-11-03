#include<stdio.h>
int main()

{
	
	int i,j;
	int m;
	scanf("%d",&m);

	 if(m>=2&&m<=10);
    for(i=0;i<m;i++){
    	for(j=1;j<=i*2+1;j++)
        for(j=m-i;j>1;j--)//¿Õ¸ñÊý
         printf(" ");
        for(j=m-i;j>1;j--)//ÐÇºÅÊý
            printf("*");
        printf("\n");
       
    }
     return 0;
		
	
}
