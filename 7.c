#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, len, temp = 0;
    int flag = 0;
    printf("Keshav Gupta\n");
    printf("Enter a string:\n");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
        printf("string is a palindrome");
    }
    else
    {
        printf("string is not a palindrome");
    }
    return 0;
}