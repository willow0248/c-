/*输入一批正整数（以零或负数为结束标志），求其中的奇数和。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int num, sum = 0;
    while (scanf("%d", &num) && num > 0)
    {
        if (num % 2) sum += num; 
    }
    printf("%d", sum);
    return 0;
}