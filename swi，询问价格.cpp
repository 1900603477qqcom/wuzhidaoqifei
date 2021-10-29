#include<stdio.h>
int main(){
    int i,x;
    double price;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
          for(i = 1;i <=5;i++){
          scanf("%d",&x);
              if(x==0)
                  break;
              switch(x){
                  case 1:price = 3.00;break;
                  case 2:price = 2.50;break;
                  case 3:price = 4.10;break;
                  case 4:price = 10.20;break;
                  default:price = 0.00;break;
              }
              printf("price = %.2lf\n",price);
              
          }
    
    return 0;
}

