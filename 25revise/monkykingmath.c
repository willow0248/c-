#include <stdio.h>

int main() {
    //数学公式
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);  
    // 特殊情况：m=1时所有猴子都会退出
    if (m == 1) {
        printf("none");
        return 0;
    }
    // 计算标准约瑟夫环问题的解（0-based）
    int survivor = 0;  // f(1) = 0
    for (int i = 2; i <= n; i++) {
        survivor = (survivor + m) % i;
    }
    
    // 调整为从第q只猴子开始（转换为1-based编号）
    int result = (q - 1 + survivor) % n + 1;
    
    printf("%d", result);
    return 0;
}