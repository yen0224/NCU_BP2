#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[10];
    printf("input>");
    fgets(str,10,stdin);
    str[strlen(str)-1]='\0';
    printf("--output--\n");
    printf("\"%s\"\n",str);
    printf("\\%-20s\\\n",str);
    printf("\\%20s\\\n",str);

    return 0;
}
