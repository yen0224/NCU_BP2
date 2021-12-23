//去除重複
//C standard: C11
//known issue: in C99 standard, iterator can not be declared in for loop
//if encounter error, please declared the iter outside the loop like below
/*int i;
 *for(i;i<count;expression)
 *  statements;
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int Sample[20];
    int input;
    //輸入陣列
    for (int i = 0; i < 20; i++){
        scanf("%d", &input);
        Sample[i]=input;
    }
    // bubble sort
    for (int i = 0; i < 20; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (Sample[j] > Sample[i])
            {
                int temp = Sample[j];
                Sample[j] = Sample[i];
                Sample[i] = temp;
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if(i!=0){
            if(Sample[i]==Sample[i-1]){
                continue;
            }
            else{
                printf(" %d",Sample[i]);
            }
        }
        else{
            printf("%d",Sample[i]);
        }
    }
    
    return 0;
}
