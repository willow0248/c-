/*给定正整数n，求不大于n（n≤13）的正整数的阶乘的和（即求1!+2!+3!+...+n!），输出阶乘的和。*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum=0;
    long long index=1;
    for (int i = 1; i <= n; ++i) {
        index*=i;
        sum+=index;
    }
    printf("%lld", sum);
}