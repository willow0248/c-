#include <stdio.h>

/**
 * 判断一个数是否是自守数
 * @param n 要判断的数
 * @return 是自守数返回1，否则返回0
 */
int selfhold(int n) {
    long long square = (long long)n * (long long)n;  // 计算平方，避免溢出
    long long mod = 10;  // 初始模数
    
    // 找到合适的模数（10的n的位数次方）
    while (mod <= n) {
        mod *= 10;
    }
    
    // 检查平方的尾数是否等于原数
    return (square % mod) == n;
}

int main() {
    printf("200000以内的自守数有：\n");
    for (int i = 0; i <= 200000; i++) {
        if (selfhold(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}