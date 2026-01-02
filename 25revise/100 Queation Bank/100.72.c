/*输入一个正整数 n，计算从1到n的平方根之和（保留 2 位小数）。可包含
头文件 math.h，并调用 sqrt 函数求平方根。试编写相应程序。*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += sqrt(i);
    }
    printf("%.2f", sum);
    return 0;
}