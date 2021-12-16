/*LCM(lowest common multiple)是最小公倍數的意思，請撰寫一個函式 LCM()，該函式會獲得兩個整數並回傳該兩個整數的最小公倍數。*/
#include <stdio.h>
int LCM(int a, int b){
    int lcm=1;
    int i=2;
    if( a==1 || b==1 ) lcm=a*b;
    else if( a>=i && b>=i )
    {
        while( a>=i && b>=i )
        {
        while( a%i==0 && b%i==0 )
        {
                lcm = lcm * i;
                a /= i;
                b /= i;
            }
            i++;
        }
        lcm=lcm*a*b;
    }
    return lcm;
}
int main(int argc, char const *argv[])
{
    printf("請輸入兩個整數:");
    int a, b;
    scanf("%d %d",&a,&b);
    printf("LCM is %d",LCM(a,b));
    return 0;
}
