/* 编写程序，利用结构变量求解两个复数之积。
提示：求解(a1+a2i)×(b1+b2i)，乘积的实部为：a1×b1 - a2×b2，虚部为：a1×b2 + a2×b1。
输入实例
1 2 3 4
输出实例
(1+2i) * (3+4i) = -5 + 10i
*/
#include <stdio.h>
struct Complex {int r, i;} c1, c2, ans;
//结构体的另一种定义方式
int main() {
    scanf("%d%d%d%d", &c1.r, &c1.i, &c2.r, &c2.i);
    ans.r = c1.r*c2.r - c1.i*c2.i;
    ans.i = c1.r*c2.i + c1.i*c2.r;
    printf("(%d+%di) * (%d+%di) = %d + %di\n", c1.r,c1.i,c2.r,c2.i,ans.r,ans.i);
    return 0;
}