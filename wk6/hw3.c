// 平均數、中位數、眾數
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0,input;
    int ct[10],sq[10];
    //fill ct[] with 0
    for (int i = 0; i < 10; i++)
    {
        ct[i]=0;
    }
    //do the input and summation
    int count=0;
    do
    {
        scanf("%d",&input);
        sq[count]=input;
        sum+=input;
        count++;
        
    } while (getchar()!='\n');
    //bubble sort
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < i; ++j) {
            if (sq[j] > sq[i]) {
                int temp = sq[j];
                sq[j] = sq[i];
                sq[i] = temp;
            }
        }
    }
    //output
    printf("averge:%.1f\n",(float)sum/count); //averge
    count--;
    printf("Mean:%.1f\n",count%2?(float)(sq[count/2]+sq[count/2+1])/2:sq[count/2]);
    printf("Mode:\n");
    return 0;
}
