/*将一笔零钱（大于 8 分，小于 1 元, 精确到分）换成 5 分、2 分和 1 分的硬币，每种硬币至少有一枚。输入金额，问有几种换法？
针对每一种换法，输出各种面额硬币的数量和硬币的总数量。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int money, count = 0; 
    scanf("%d", &money); 
    // i=5分硬币数，j=2分硬币数，k=1分硬币数
    for (int i = 1; i <= money; i++){
        for (int j = 1; j <= money / 2; j++){
            for (int k = 1; k <= money/5; k++){
                if (5 * i + 2 * j + 1 * k == money){
                    count++; 
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", 
                           i, j, k, i + j + k);
                }
            }
        }
    }
    printf("count = %d", count); // 输出最终总换法数
    return 0;
}