/*输入 2 个正整数 m 和 n(1<=m,n<=1000,m<n)，
输出 m 到 n 之间的所有满足各位数字的立方和等于其自身的数。
要求定义并调用函数is(number)判断number 的各位数字之立方和是否等于其自身
若相等则返回 1，否则返回 0。
试编写相应程序。*/
#include <stdio.h>

int is(int number) {
    int sum = 0;
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == number ? 1 : 0;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    printf("result:\n");
    for (int i = m; i <= n; i++) {
        if (is(i) == 1) {
            printf("%d\n", i);
        }
    }
    return 0;
}