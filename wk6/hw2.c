// https://ithelp.ithome.com.tw/articles/10220017
//C standard: C11
//known issue: in C99 standard, iterator can not be declared in for loop
//if encounter error, please declared the iter outside the loop like below
/*int i;
 *for(i;i<count;expression)
 *  statements;
*/
#include <stdio.h>
#include <string.h>
int testPalindrome(char str[], int a, int b)
{
    if (str[a] != str[b])
    {
        return 0;
    }
    else if (a == b || (a + 1 == b && str[a + 1] == str[b]))
    {
        return 1;
    }
    else if (str[a] == str[b])
    {
        return testPalindrome(str, a + 1, b - 1);
    }
}
int main(int argc, char const *argv[])
{
    char str[1024];
    int length, result;
    fgets(str,1024,stdin);
    length = strlen(str);
    if (length == 0)
    {
        printf("1\n");
    }
    else
    {
        result = testPalindrome(str, 0, length - 2);
        if (result)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
