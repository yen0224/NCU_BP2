/*試撰寫一程式，由鍵盤輸入一個整數作為上限，然後用一個函式 countPrime()計算 1 到此上限共有幾個質數。
(質數是指除了 1 和它本身之外，沒有其他的數可以整除它的數，例如，
2,3,5,7 與 11 等皆為質數)*/
#include <stdio.h>
int countPrime(int num){
    int count=0;
    for (int i = 2; i < num; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i==j)
            {
                count++;
            }
            else if(!(i%j)){
                break;
            }
            
        }
        
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    puts("plz enter a number:");
    scanf("%d",&n);
    printf("from 1 to %d,ther are %d prime numbers.\n",n,countPrime(n));
    /* code */
    return 0;
}
