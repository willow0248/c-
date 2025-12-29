/*给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号
(注：题目保证这些字符串一定不是C语言的保留字)。

C语言标识符要求：
1.非保留字；2.只包含字母、数字及下划线（“_”）。3.不以数字开头。
输入格式
一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。

输出格式
一行，如果它是C语言的合法标识符，则输出yes，否则输出no。
输入样例
RKPEGX9R;TWyYcp
输出样例
no
*/
#include <stdio.h>
#include <ctype.h> // 包含字符判断库函数：isalpha、isdigit

int main() {
    char s[21]; // 题目规定长度≤20，数组开21位（留1位存字符串结束符'\0'）
    scanf("%s", s); // 读取无空白符的字符串，%s天然适配
    
    int is_valid = 1; 
    int i = 0;
    
    // 校验1：首字符必须是字母 或 下划线
    if (!(isalpha(s[0]) || s[0] == '_')) {
        is_valid = 0;
    } else {
        // 校验2：遍历剩余所有字符，必须是字母/数字/下划线
        while (s[++i] != '\0') {
            if (!(isalpha(s[i]) || isdigit(s[i]) || s[i] == '_')) {
                is_valid = 0;
                break; 
            }
        }
    }
    
    // 输出结果
    if (is_valid) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}