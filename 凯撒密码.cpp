#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k;
    char a[100],b[100];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i]='A'+(a[i]-'A'+3)%26;
        }
        else if (a[i]>='a' && a[i]<='z')
        {
            a[i]='a'+(a[i]-'a'+3)%26;
        }
    }
    for (j=0;j<strlen(a);j++)
    {
        printf("%c",a[j]);
    }
    return 0;
}

