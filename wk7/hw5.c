#include <stdio.h>
double addition(double *A, double *B)
{
    return *A + *B;
}
double substraction(double *A, double *B)
{
    return *A - *B;
}
double multiplication(double *A, double *B)
{
    return *A * *B;
}
double Division(double *A, double *B)
{
    double denometer = *B;
    if (*B == 0)
    {
        return 0;
    }
    else
    {
        return *A / denometer;
    }
}
int main(int argc, char const *argv[])
{
    //TODO 這邊有點看不懂老師的敘述，假如老師測資並非第一次輸入就是-1，則結果應該都是正確的
    //TODO 改成do-while?
    int operator;
    int *opr = &operator;
    double oprandA, oprandB;
    double *opA = &oprandA, *opB = &oprandB;
    double (*func)(double*, double*);
    printf("Enter a number between 0 to 3(+,-,*,/),-1 to end:");
    scanf("%d", opr);
    printf("Input two numbers to the operand:");
    scanf("%lf %lf", opA, opB);
    while (operator != -1&&getchar()!=-1)
    {
        switch (*opr)
        {
        case 0:
            /* code */
            func = &addition;
            break;
        case 1:
            func = &substraction;
            break;
        case 2:
            func = &multiplication;
            break;
        case 3:
            func = &Division;
            break;
        default:
            puts("ERROR!");
            break;
        }
        printf("%lf %d %lf=%lf\n", *opA, *opr, *opB, func(opA, opB));
        printf("Enter a number between 0 to 3(+,-,*,/),-1 to end:");
        scanf("%d", opr);
        if(operator==-1) break;
        printf("Input two numbers to the operand:");
        scanf("%lf %lf", opA, opB);
    }

    // printf("%d %lf %lf",*opr,*opA,*opB);
    return 0;
}
