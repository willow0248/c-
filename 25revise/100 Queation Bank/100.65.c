/*输入5个字符串(每个字符串长度小于80），
按由小到大的顺序输出。试编写相应程序。
输入格式：
str1
str2 
str3 
str4 
str5
输出结果：
str1
str2 
str3 
str4 
str5*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[5][80], t[80];
    int i, j;
    for(i = 0; i < 5; i++)
    {
        scanf("%s",s[i]);
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(strcmp(s[j], s[j+1]) > 0)
            {
                strcpy(t, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], t);
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        puts(s[i]);
    }
    return 0;
}