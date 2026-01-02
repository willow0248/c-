/*输入一行文字，统计其中的大写字母、小写字母、空格、数字以及
其他字符各有多少。试编写相应程序。(输出的冒号是英文状态下)
输入格式:
1 2 3 
输出结果:
upper: 0 lower: 0 blank: 3 digit: 3 other: 0*/
#include <stdio.h>

int main() {
    char str[1000];
    int upper = 0, lower = 0, blank = 0, digit = 0, other = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
        else if(str[i] == ' ') {
            blank++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digit++;
        }
        else if(str[i] != '\n') {  // 排除换行符
            other++;
        }
    }
    printf("upper: %d lower: %d blank: %d digit: %d other: %d\n", 
           upper, lower, blank, digit, other);
    
    return 0;
}