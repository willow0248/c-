/*求一元二次方程“ax^2+bx+c=0”的根，其中a不等于0。
结果要求精确到小数点后5位。
若两个实根相等，则输出形式为：“x1=x2=XXX.XXXXX”；
若两个实根不等，需满足根小者在前的原则，中间用分号隔开，输出形式为：“x1=XX.XXXXX;x2=XX.XXXXX"；
若无实根输出“No answer!”。
输入格式
输入一行，包含三个浮点数a, b, c（它们之间以一个空格分开），分别表示方程a的系数。
输出格式
输出一行，表示方程的解。
所有输出部分要求精确到小数点后5位，数字、符号之间没有空格。

输入样例
-15.97 19.69 12.02
输出样例
x1=-0.44781;x2=1.68075*/
#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta=b*b-4*a*c;
    if(delta<0){
        printf("No answer!");
    } else if(delta==0){
        double x1=-b/(2*a);
        printf("x1=x2=%.5lf", x1);
    } else{
        double x1=(-b+sqrt(delta))/(2*a);
        double x2=(-b-sqrt(delta))/(2*a);
        if(x1>x2){
            double temp=x1;
            x1=x2;
            x2=temp;
        }
        printf("x1=%.5lf;x2=%.5lf", x1, x2);
    }

    return 0;
}