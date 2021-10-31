#include <stdio.h>
int main()
{
    int blank,digit,other;
	char ch;
    blank=digit=other =0;
    ch=getchar();
    while(ch!='\n'){
        ch=getchar();
    switch(ch){
        case ' ':
            blank++;
            break;
        case '0':case '1':
            case '3':case '4':
             case '5':case '6':
             case '7':case '8': case '9':
            digit++;
            break;
        default:
            other++;
            break;
        
    }
    }
	printf("blank = %d,digit = %d,other = %d",blank,digit,other);
    return 0;
	}
	
