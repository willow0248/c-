/*输入 3 个整数，按从小到大的顺序输出。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b) {t = a; a = b; b = t;}
    if(a > c) {t = a; a = c; c = t;}
    if(b > c) {t = b; b = c; c = t;}
    printf("%d %d %d", a, b, c);
    return 0;
}