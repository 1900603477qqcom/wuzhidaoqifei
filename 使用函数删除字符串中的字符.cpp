#include<stdio.h>
void delchar(char* str, char c);
int main() {
    char str[15][1000];
    char c, n, i;
    scanf("%d\n", &n);    //***必须把\n吃掉，否则下次gets直接读到它结束    
    for (i = 0; i < n; i++) {
        gets(str[i]);
        scanf("%c", &c);
        getchar();        //***同上
        delchar(str[i], c);
        printf("result: %s\n", str[i]);
 
    }
    return 0;
}
 
void delchar(char* s, char c) {
    int k, i;
    for (k = i = 0; s[i]; i++)          //s[i] 等价于 s[i] != '\0',因为'\0'的ASCII码为0
        if (s[i] != c)                  //若字符串中某字符不等于c则保留下来，否则就不赋值，即删去
            s[k++] = s[i];
    s[k] = '\0';                        //最后的'\0'不可忘
}
