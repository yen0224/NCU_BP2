#include <stdio.h>
int main(int argc, char const *argv[])
{
    int stackN;
    int ct=0;
    scanf("%d",&stackN);
    while (stackN!=0)
    {
        ct++;
        int stack[stackN],valuesum=0;
        for (int i = 0; i < stackN; i++)
        {
            scanf("%d",stack+i);
            valuesum+=stack[i];
        }
        int stackaverge=valuesum/stackN;
        int movetime=0;
        int dif=0;
        for (int i = 0; i < stackN; i++)
        {
            dif=stack[i]-stackaverge;
            if(dif>0)movetime+=dif;
        }
        printf("Set #%d\nThe minimun number of moves is %d\n",ct,movetime);
        scanf("%d",&stackN);
    }
    return 0;
}
