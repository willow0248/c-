/*输入2个正整数m和n (1≤m, n≤6)，然后输入该m行n列矩阵a
中的元素，分别求出各行元素之和，并输出。试编写相应程序。
输入格式：
2 3
1 2 3
4 5 6
输出结果：
6
15*/
#include <stdio.h>
int main()
{
    int m, n, i, j, sum;
    int a[6][6];
    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        sum = 0;
        for(j = 0; j < n; j++){
            sum += a[i][j];
        }
        printf("%d\n", sum);
    }
    return 0;
}