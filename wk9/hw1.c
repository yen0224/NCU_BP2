#include <stdio.h>
int main(int argc, char const *argv[])
{
    float input;
    printf("please input the temperature (Fahrenheit)");
    scanf("%f",&input);
    printf("%+10.3f ˚F\n",input);
    printf("%+10.3f ˚C\n",(input-32)*5/9);
    return 0;
}
