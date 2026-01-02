/*求交错序列前N项和：输入一个正整数 n，
计算交错序列1-2/3+3/5-4/7+5/9-6/11+...的前 n 项之和，
保留3位小数。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0.0, sign = 1.0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += sign * i / (2 * i - 1);
        sign = -sign;
    }
    printf("%.3f", sum);
    return 0;
}