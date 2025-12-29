/*分数a/b化为小数后，小数点后第n位的数字是多少？其中0 < a < b < 100，1≤n≤10000。*/
/*
#include<stdio.h>
int main(){
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    double c=(double)a/b;
    long long num=1;
    for (int i = 0; i < n; i++)
    {

        num*=10;
    }
    int d=(int)(c*num)%10;
    printf("%d", d);
    return 0;
}
*/

#include <stdio.h>
//因为double有精度损失，所以模拟手动除法
int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    
    int remainder = a % b;  // 初始余数
    int digit = 0;
    
    // 计算小数点后第n位
    for (int i = 1; i <= n; i++) {
        // 模拟除法：被除数 = 余数 × 10，相当于加0
        remainder *= 10;
        // 当前位的数字 = 被除数 ÷ 除数，相当于在横线上写上数字
        digit = remainder / b;
        // 更新余数，下一个横线的被除数
        remainder = remainder % b;
    }
    
    printf("%d\n", digit);
    return 0;
}