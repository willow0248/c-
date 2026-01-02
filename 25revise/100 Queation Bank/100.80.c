/*输入一个正整数 n，输出 2/1+3/2+5/3+8/5 +…的前 n 项之和，保留 2 位小数。
该序列从第 2 项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0.0;
    double numerator = 2.0, denominator = 1.0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += numerator / denominator;  

        double temp = numerator;         
        numerator = numerator + denominator;
        denominator = temp;              
    }
    printf("%.2f", sum); 
    return 0;
}