#include<stdio.h>
void delchar(char* str, char c);
int main() {
    char str[15][1000];
    char c, n, i;
    scanf("%d\n", &n);    //***�����\n�Ե��������´�getsֱ�Ӷ���������    
    for (i = 0; i < n; i++) {
        gets(str[i]);
        scanf("%c", &c);
        getchar();        //***ͬ��
        delchar(str[i], c);
        printf("result: %s\n", str[i]);
 
    }
    return 0;
}
 
void delchar(char* s, char c) {
    int k, i;
    for (k = i = 0; s[i]; i++)          //s[i] �ȼ��� s[i] != '\0',��Ϊ'\0'��ASCII��Ϊ0
        if (s[i] != c)                  //���ַ�����ĳ�ַ�������c��������������Ͳ���ֵ����ɾȥ
            s[k++] = s[i];
    s[k] = '\0';                        //����'\0'������
}
