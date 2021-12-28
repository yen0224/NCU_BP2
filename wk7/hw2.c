#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *ptr = "This is a test.";
    int strl = strlen(ptr);
    int smallltr = 0;
    int symbol = 0;
    // TODO:不確定老師要的是計算所有小寫字母的總數，還是各個字母出現的數量，已註解掉的程式碼是後者的程式碼
    /*
    int result[26][2];
    //initialize result array

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j]=0;
        }

    }*/
    //利用ASCII計數
    for (int i = 0; i < strl; i++)
    {
        int word = ptr[i];
        //大寫
        if (word <= 90 && word >= 65)
        {
            symbol++;
        }
        //小寫
        else if (word >= 97 && word <= 122)
        {
            smallltr++;
        }
        else
        {
            symbol++;
        }
    }

    printf("字元總數\t%d\n", strl);
    printf("小寫字母數\t%d\n", smallltr);
    return 0;
}
