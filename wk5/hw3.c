/*請撰寫一個程式來模擬擲硬幣 10 次的動作。此程式會在每一次投擲後印出 該次的結果，並在最後計算並印出各結果總共的次數。該程式需要呼叫一個 稱為 flip()的函式，他沒有任何引數，當它傳回 0 時代表反面，傳回 1 時代 表正面。(你可能會需要用到 rand()函式，該函式會回傳一個亂數給你。)*/
#include <stdio.h>
#include <stdlib.h>
int flip(void){
    //srand(time(NULL));
    int rs=rand();
    //printf("rs=%d\n",rs);
    return rs%2;
}
int main(int argc, char const *argv[])
{
    int result;
    int Tct=0, Hct=0;
    for (int i = 0; i < 10; i++)
    {
        result=flip();
        printf("第%d次結果是%s\n",i+1,(result?"Heads":"Tails"));
        result?Hct++:Tct++;
    }
    printf("Heads has %d\nTails has %d",Hct,Tct);
    return 0;
}

