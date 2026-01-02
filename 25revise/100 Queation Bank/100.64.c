/*输入一个以#结束的字符串（长度小于10），
滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，
然后将其转换为十进制数后输出。如果过滤后字符串的首字符为“-”，代表该数是负数。
试编写相应程序。
输入格式：
5*6#
输出结果：
86*/
#include <stdio.h>
int main()
{
    char ch, s[10];
    int i = 0, flag = 1;
    long num = 0;
    while((ch = getchar()) != '#')
    {
        if(ch == '-' && i==0) flag = -1;
        else if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F') || (ch >= 'a' && ch <= 'f')){
            s[i++] = ch;
        }
    }
    for(int j = 0; j < i; j++){
        num *= 16;
        if(s[j] >= '0' && s[j] <= '9') num += s[j] - '0';
        else if(s[j] >= 'A' && s[j] <= 'F') num += s[j] - 'A' + 10;//'A'-'A'+10=10
        else num += s[j] - 'a' + 10;
    }
//第n位乘16的n次方
    num *= flag;
    printf("%ld", num);
    return 0;
}