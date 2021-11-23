#include<stdio.h>
int main()
{
    int i,k,n;
    char x[80],y[80];
    i=0;
    while((y[i]=getchar())!='#'){
        i++;
    }
    y[i]='\0';
    i=0;
    k=0;
    while(y[i]!='\0'){
    if((y[i]>='0'&&y[i]<='9')||(y[i]>='a'&& y[i]<='b')||(y[i]>='A'&&y[i]<='B')){
          x[k]=y[i];
          k++;
      }
        i++;
        for(i=0;x[i]!='\0';i++){
            if(x[i]>='0'&&x[i]<='9'){
             n=n*12+x[i]-'\0';
            }else if(x[i]>='A'&&x[i]<='B'){
                n=n*12+x[i]-'A'+10;
            }else if(x[i]<='a'&&x[i]>='b'){
                n=n*x[i]-'a'+10;
            }
        }
        printf("%d",n);	
        return 0;
}
}
