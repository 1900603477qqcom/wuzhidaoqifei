#include<stdio.h>
int max(int x,int y,int z,int Max);//声明函数
int min(int x,int y,int z,int Min);
int main()
{
    int x,y,z,Max,Min,i;
    scanf("%d %d %d",&x,&y,&z);
   Max=max(x,y,z,Max);//传入定义变量（入口）
   Min=min(x,y,z,Min);//转跳到子函数计算
   i=Max+Min;
    printf("Max+Min=%d\n",i);
return 0;
}
int max(int x,int y,int z,int Max)//自定义函数
{
    
    if(x>y)
    {
        if(x>z)
            Max=x;
    }
    if(y>x)
    {
        if(y>z)
            Max=y;
    }
    if(z>y)
    {
        if(z>x)
            Max=z;
    }
    return Max;//输出数值（出口）
}
int min(int x,int y,int z,int Min){
    
    if(x<y)
    {
        if(x<z)
            Min=x;
    }
    if(y<x)
    {
        if(y<z)
            Min=y;
    }
    if(z<y)
    {
        if(z<x)
          Min=z;
    }
    return Min;
}
