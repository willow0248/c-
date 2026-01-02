/*输入一个实数 x，计算并输出下式的值，直到最后一项的绝对值小于 0.00001
（保留 4 位小数）。要求定义和调用函数 fact(n)计算 n 的阶乘，可以调用 pow()函数求幂。试编写相应程序。
表达式为s=1+x+x^2/2!+x^3/3!+x^4/4!+......*/
#include <stdio.h>
#include <math.h>  

double fact(int n) {
    double res = 1.0;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    double x, s = 1.0;  
    int n = 1;          // n从1开始，对应x^1/1!项
    scanf("%lf", &x);   
    
    while (1) {
        // 计算当前项的值：x^n / n!
        double term = pow(x, n) / fact(n);
        s += term;  
        if (fabs(term) < 1e-5) {
            //fabs(term)：计算浮点型数term的绝对值，整型绝对值用 abs ()，浮点型必须用 fabs ()。
            break;
        }    
        n++;            
    }
    printf("%.4f", s);  
    return 0;
}