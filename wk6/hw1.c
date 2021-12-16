#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sq[10], ct[10];
    int count = 10;
    int input;
    int check = 0;
    //初始化
    for (int i = 0; i < 10; i++)
    {
        ct[i] = 0;
    }
    //輸入
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &input);
        sq[i] = input;
        ct[input]++;

        if(getchar()=='\n'){
            count=i;
            break;
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (!i)
        {
            printf("%d\t%d\n", sq[i], ct[sq[i]]);
        }
        else
        {
            check = 1;
            for (int j = 0; j < i; j++)
            {
                if (sq[j] == sq[i])
                {
                    check = 0;
                    break;
                }
                else
                {
                    check = 1;
                }
            }
            if (check)
                printf("%d\t%d\n", sq[i], ct[sq[i]]);
        }
    }
    return 0;
}
