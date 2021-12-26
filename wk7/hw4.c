#include <stdio.h>
void SumTwoArray(int *ara,int *arb,int *sum){
    for (int i = 0; i < 3; i++)
    {
        *sum+=(*(ara+i)+*(arb+i));
    }
    
}
int main(int argc, char const *argv[])
{
    int a[3];
    int b[3];
    int sum=0;
    int *arrayA=a,*arrayB=b,*sumptr=&sum;
    printf("Enter the first array(size 3)");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter the second array(size 3)");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",b+i);
    }
    SumTwoArray(arrayA,arrayB,sumptr);
    printf("The sum of two arrays is %d",sum);
    return 0;
}
