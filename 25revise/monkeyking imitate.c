#include <stdio.h>
int main() {
    //数组模拟
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);
    // 特殊情况：m=1时所有猴子都会退出
    if (m == 1) {
        printf("none");
        return 0;
    }
    // 创建数组表示猴子状态：1表示在圈中，0表示已退出
    int monkeys[1000] = {0}; // 题目保证n≤999
    // 初始化所有猴子都在圈中
    for (int i = 0; i < n; i++) {
        monkeys[i] = 1;
    }
    int remaining = n;       // 剩余猴子数量
    int current = q - 1;     // 当前猴子位置（0-based，q-1因为从第q只开始）
    int count = 0;           // 报数计数器
    // 模拟过程，直到只剩一只猴子
    while (remaining > 1) {
        // 如果当前猴子还在圈中，进行报数
        if (monkeys[current] == 1) {
            count++;
            // 报到m的猴子退出
            if (count == m) {
                monkeys[current] = 0; // 标记为已退出
                remaining--;          // 剩余猴子数减1
                count = 0;            // 重置报数
            }
        }
        
        // 移动到下一只猴子（循环）
        current = (current + 1) % n;
    }
    // 找到最后剩下的猴子
    for (int i = 0; i < n; i++) {
        if (monkeys[i] == 1) {
            printf("%d", i + 1); // 转换为1-based编号
            break;
        }
    }
    
    return 0;
}