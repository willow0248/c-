#include <stdio.h>

void king(int N) {
    // 创建猴子数组（最多100只猴子），索引1到N
    int monkeys[101] = {0};
    
    // 初始化：所有猴子都在圈中（1表示在圈中）
    for (int i = 1; i <= N; i++) {
        monkeys[i] = 1;
    }
    
    int count = 1;       // 报数计数器（从1开始报数）
    int remaining = N;   // 剩余猴子数量
    int current = 1;     // 当前猴子编号
    
    // 模拟过程：直到只剩一只猴子
    while (remaining > 1) {
        // 跳过已退出的猴子，找到下一只在圈中的猴子
        while (monkeys[current] == 0) {
            current = (current % N) + 1;
            //保证首尾相接
        }
        
        // 处理当前猴子
        if (count == 3) {
            // 报到3的猴子退出
            monkeys[current] = 0;
            remaining--;
            count = 1;  // 重置报数
        } else {
            count++;  // 继续报数
        }
        
        // 移动到下一只猴子
        current = (current % N) + 1;
    }
    
    // 找出最后剩下的猴子（大王）
    for (int i = 1; i <= N; i++) {
        if (monkeys[i] == 1) {
            printf("%d号猴子是大王。\n", i);
            return;
        }
    }
}
