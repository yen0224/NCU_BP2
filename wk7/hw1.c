#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={31,17,33,22,16};
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        *(p+i)+=10;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(p+i));
    }
    
    
    return 0;
}
