#include <stdio.h>
#include <string.h>

int main() {
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
