/*输入精度 e 和 x，用下列公式求 cos(x)的近似值，精确到最后一项的绝对值小于 e。
cos(x)=x^0/0!-x^2/2!+x^4/4!-x^6/6!+......
要求定义并调用函数 funcos(e,x)计算 cos(x) 的近似值。试编写相应程序。*/
#include <stdio.h>
#include <math.h>
double funcos(double e,double x){
    int a=2;
    int sigh=-1;
    double term;
    double cur=1.0;//首项一直为1
    int power=1;
       
        /* for(int i=2;i<=a;i++){
            power*=i;
        }
         term=pow(x,a)/power*sigh;//pow会超时*/

    double pre_item = 1.0; // 保存上一项的值，用于递推
    do {
        // 递推公式：后一项 = 前一项 * (-x²) / [a*(a-1)]
        term = pre_item * (-1) * x * x / (a * (a - 1));
        cur += term;
        sigh *= -1;
        a += 2;
        pre_item = term; // 更新前一项为当前项，供下一次递推
    }while(fabs(term)>=e);
    return cur;
}
int main() {
    double e,x;
    scanf("%lf%lf",&e,&x);
    printf("sum = %lf",funcos(e,x));
    return 0;
}