// 平均數、中位數、眾數
// C standard: C11
// known issue: in C99 standard, iterator can not be declared in for loop
// if encounter error, please declared the iter outside the loop like below
/*int i;
 *for(i;i<count;expression)
 *  statements;
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // declare and initialize "sum" var.
    int sum = 0;
    // declared the "input" var.
    int input;
    // ct[] is use to determine the mode, sq[] is use to record the data
    int ct[10], sq[10];

    // do the input and summation

    // count the number of input data
    int count = 0;
    // initialize the counter array
    for (int i = 0; i < 10; i++)
    {
        ct[i] = 0;
    }

    do
    {
        scanf("%d", &input);
        sq[count] = input;
        sum += input;
        ct[input - 1]++;
        count++;
    } while (getchar() != '\n');
    // bubble sort
    for (int i = 0; i < count; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (sq[j] > sq[i])
            {
                int temp = sq[j];
                sq[j] = sq[i];
                sq[i] = temp;
            }
        }
    }
    // TODO 眾數可能會有多個
    // now search for the max show time
    int maxshow = 0;
    for (int i = 0; i < 10; i++)
    {
        if (ct[i] > maxshow)
            maxshow = ct[i];
    }

    // output region
    printf("averge:%.1f\n", (float)sum / count); // averge
    count--;
    printf("Mean:%.1f\n", count % 2 ? (float)(sq[count / 2] + sq[count / 2 + 1]) / 2 : sq[count / 2]);
    printf("Mode:");
    for (int i = 0; i < 10; i++)
    {
        if (maxshow == 1)
        {
            printf("-1");
            break;
        }
        else if (maxshow == ct[i])
            printf(" %d", i + 1);
    }

    return 0;
}
