#include <stdio.h>
int main(){
    int a, b, c;
    a = 3;
    b = 7;
    c = ((a) || (b=6));
    printf("%d %d %d", a, b, c);
    return 0;
}
