/*如果一個整數的所有因數(包括 1、但不包含這個數本身)加起來的和等於該 數，那麼該數便被稱為完全數。例如 6 便是一個完全數，因為 6=1+2+3。 請撰寫一個函式 isPerfect 來判斷參數 number 是否是個完全數，再將此函式 應用到一個程式上，該程式會接收一個數字 limit，並將會印出 1~limit 之間 所有的完全數。*/
#include <stdio.h>
int isPerfect(int num){
    int factorSum=0;
    for (int i = 1; i < num; i++)
    {
        if (!(num%i))
        {
            factorSum+=i;
        }
        
    }
    if (factorSum==num)
        return 1;
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    int limit;
    printf("請輸入程式的上限：");
    scanf("%d",&limit);
    for (int i = 2; i <= limit; i++)
    {
        if(isPerfect(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}