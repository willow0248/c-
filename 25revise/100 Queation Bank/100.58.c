/*使用函数输出指定范围内的完数：输入两个正整数 m 和 n(1<=m,n<=1000)，
输出 m ～ n之间的所有完数，完数就是因子和 与它本身相等的数。
要求定义并调用函数factorsum(number)，它的功能是返回number的因子和。
例如，factorsum(12)的返回值是16
（1+2+3+4+6）。试编写相应程序。
输入格式：
20 50  （一个空格隔开）
输出结果：
28
输入格式：
100 200  （一个空格隔开）
输出结果：
None*/
#include <stdio.h>

int factorsum(int number) {
    int sum = 0;
    if(number==1) return 1;
    for (int i = 1; i<=number/2;i++) {
        //这里小于二分之一防止重复
        if (number % i == 0) { 
            sum += i;
        }
    }
    return sum;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n); 
    int flag = 0; 
    for (int num=m;num<=n;num++) {
        if (factorsum(num)==num) {
            printf("%d\n",num);
            flag = 1;
        }
    }
    // 未找到任何完数，输出None
    if (flag == 0) {
        printf("None\n");
    }

    return 0;
}