#include<stdio.h>
int Gcd(int a,int b);
int main()
{
    int m,n,r;
    scanf("%d,%d",&m,&n);
    if(m>=1 && m<=10000 && n>=1 && n<=10000)
    {
        r=Gcd(m,n);
        printf("%d/%d",m/r,n/r);
    }
        else
    {
            printf("Input error!\n");
        }
    return 0;
}
int Gcd(int a,int b)
{
    int x;
    do{
        x=a%b;
        a=b;
        b=x;
    }while(x!=0);
    return a;
}
