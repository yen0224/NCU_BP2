#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cellnum,row;
    scanf("%d",&cellnum);
    row=cellnum/702+1;
    int col=cellnum%702;
    printf("%d-",row);
    if(col<=26)printf("%c",col+64);
    else{
        printf("%c",col/26+64);
        printf("%c",col%26+64);
    }
    return 0;
}
