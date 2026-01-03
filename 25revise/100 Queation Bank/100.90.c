/*输入 2 个正整数 m 和 n（1<=m,n<=500），
统计并输出m 到 n 之间的素数的个数以及这些素数的和。
素数就是只能被 1 和自身整除的正整数，
1不是素数，2 是素数。
要求定义并调用函数 prime(m) 判断 m 是否为素数，
当 m 为素数时返回 1，否则返回 0。*/
#include <stdio.h>

int prime(int m) {
    if (m <= 1) return 0;
    for (int i = 2; i < m; i++) {
        if (m % i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n, cnt=0, sum=0;
    scanf("%d%d", &m, &n);
    for(int i=m; i<=n; i++){
        if(prime(i)) { cnt++; sum+=i; }
    }
    printf("%d %d", cnt, sum);
    return 0;
}