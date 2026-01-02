/*求给定序列前 n 项和（1! + 2! + ...）：输入一个正整数 （n<=12），求e =1!+2!+3!+.....+n!的值。
要求定义和调用函数 fact(n)计算 n!，函数类型是 double。试编写相应程序。*/
#include <stdio.h>
double fact(int n);
int main()
{
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += fact(i);
    }
    printf("%.0f", sum);
    return 0;
}
double fact(int n)
{
    double res = 1.0;
    for(int j = 1; j <= n; j++){
        res *= j;
    }
    return res;
}