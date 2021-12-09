/*請撰寫三個 double 函式 toJPY、toEUR、toTWD，這三個函式皆會接受美元 (整數)輸入並分別換算輸出成等值的日圓、歐元、新台幣。
匯率為 1 美元=104.18 日圓、1 美元= 0.8479 歐元、1 美元=28.21 新台幣。*/
#include <stdio.h>
int usd=0.;
double toJPY(void){
    return 104.18*usd;
}
double toEUR(void){
    return 0.8479*usd;
}
double toTWD(void){
    return 28.21*usd;
}
int main(int argc, char const *argv[])
{
    printf("請輸入要兌換的美元金額：");
    scanf("%d",&usd);
    printf("%f\n%f\n%f\n",toJPY(),toEUR(),toTWD());
    return 0;
}
