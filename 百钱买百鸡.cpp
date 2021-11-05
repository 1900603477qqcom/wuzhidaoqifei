#include<stdio.h>
int main()
{
    int x,y,a,b,c;
    x=100,y=100;
    for(a=0;a<=y;a++){
        for(b=0;b<=y;b++){
            c=y-a-b;
    if(c>0&&c%3==0&&a*5+b*3+c/3==x){
        printf("cock=%d,hen=%d,chicken=%d\n",a,b,c);
        }
  
        }
    }
  
}
