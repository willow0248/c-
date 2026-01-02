/*输入一个正整数 n (1<n≤10)，再输入n个整数（一个空格隔开），存入数组a中，
先将数组a中的这n个数逆序存放，再按顺序输出数组a中的n个元素。试编写相应程序。
输入格式：
3
1 2 3（一个空格隔开）
输出结果：
3 2 1*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[10]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a[i]); 
        } else {
            printf(" %d", a[i]); 
        }
    }
    
    return 0;
}