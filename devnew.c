#include<stdio.h>
#include<string.h>
void cpy_str(char *,char *,int n);
int main()
{
    char a[100],b[100];
    int n;
    n=strlen(a);
    printf("enter the string\n");
    scanf("%99s",a);
    cpy_str(b,a,n);
    printf("copied string is %s\n",b);
}

void cpy_str(char *b,char *a,int n)
{
    while(*a!='\0')
    {
        *b=*a;
        a++;
        b++;
    }
}
