/*输入4个整数，每个数之间用1个空格分开，计算并输出这些整数的和与平均值，其中平均值精确到小数点后1位9.2。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int a, b, c, d, sum;
    double avg;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a + b + c + d;
    avg = sum / 4.0;
    printf("%d %.1f", sum, avg);
    return 0;
}