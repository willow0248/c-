#include <stdio.h>
#include <string.h>

int main() {
    /*题目
    编写一个程序，输入一个4位的整数，将其各位按相反次序重新组合成另一个整数输出。
注意输入值为一个4位整数，输出值也是一个4位整数，但数字顺序相反。若输出值不足4位，则需在左侧补*。
测试输入：2345
预期输出：
请输入一个4位整数:重新组合后:5432
测试输入：1020
预期输出：
请输入一个4位整数:重新组合后:0201*/
//超级严谨的解法
    int num;
    char input[10], reversed[5] = "";
    int i, len;
    
    printf("请输入一个4位整数:");
    scanf("%d", &num);
    
    // 将数字转换为字符串
    sprintf(input, "%04d", num);
    
    // 反转字符串
    len = strlen(input);
    for (i = 0; i < len; i++) {
        reversed[i] = input[len - 1 - i];
    }
    //这里的反转的-1，非常的容易遗漏
    reversed[len] = '\0';
    
    // 检查反转后的数字是否不足4位（有前导零）
    if (strlen(reversed) < 4) {
        // 补足4位
        char padded[5] = "****";
        strcpy(padded + (4 - strlen(reversed)), reversed);
        strcpy(reversed, padded);
    }
    
    printf("重新组合后:%s", reversed);
    
    return 0;
}