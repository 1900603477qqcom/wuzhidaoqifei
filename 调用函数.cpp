#include<stdio.h>
int max(int x,int y,int z,int Max);//��������
int min(int x,int y,int z,int Min);
int main()
{
    int x,y,z,Max,Min,i;
    scanf("%d %d %d",&x,&y,&z);
   Max=max(x,y,z,Max);//���붨���������ڣ�
   Min=min(x,y,z,Min);//ת�����Ӻ�������
   i=Max+Min;
    printf("Max+Min=%d\n",i);
return 0;
}
int max(int x,int y,int z,int Max)//�Զ��庯��
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
    return Max;//�����ֵ�����ڣ�
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
