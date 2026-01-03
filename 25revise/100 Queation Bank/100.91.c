/*读入一个整数，统计并输出该数中"2"的个数。
要求定义并调用函数countdigit (number, digit)，
它的功能是统计整数number中数字digit的个数。
例如,countdigit(12292, 2) 的返回值是3。
试编写相应程序。*/
#include <stdio.h>

int countdigit(int number, int digit) {
    int count = 0;
    // 特殊情况：输入数字为0时单独判定
    if (number == 0) {
        return digit == 0 ? 1 : 0;
    }
    while (number > 0) {
        int last_digit = number % 10;
        if (last_digit == digit) {
            count++;
        }
        number = number / 10;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", countdigit(num, 2));
    return 0;
}