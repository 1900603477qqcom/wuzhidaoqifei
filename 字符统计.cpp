#include<stdio.h>
int main()
{
	int letter = 0,blank = 0,other = 0,digit = 0;
	int i;
	char ch;
	for(i=1;i<=10;i++){
		ch=getchar();//一次只能请输入一个字符
		if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A')){
			letter++;
		} 
		else if((ch==' ')||(ch=='\n')){
			blank++;
		}
		else if(ch>='0'&&ch<='9'){
			digit++;
		}else
		other++;
	}
printf("%d %d %d %d",letter,blank,digit,other);
return 0;
}
