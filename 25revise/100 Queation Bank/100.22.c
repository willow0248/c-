/*输入一个除空格以外的可见字符（可以用键盘输入的字符），输出其ASCII码。
输入格式
一个除空格以外的可见字符。
输出格式
一个十进制整数，即该字符的ASCII码。*/
#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);
    printf("%d", n);
    return 0;
}