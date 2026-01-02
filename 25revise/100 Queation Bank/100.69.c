/*输入两个正整数 m 和 n(0<m<=n)，
求从m到n的整数平方以及倒数之和，包括m和n，结果保留6位小数。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int m, n, i;
    double sum_sq = 0.0, sum_rec = 0.0;
    scanf("%d %d", &m, &n);
    for(i = m; i <= n; i++)
    {
        sum_sq += i * i;
        sum_rec += 1.0 / i;
    }
    printf("%.6f", sum_sq+sum_rec);
    return 0;
}