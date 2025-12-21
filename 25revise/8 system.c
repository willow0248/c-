#include <stdio.h>

char *conv(unsigned int n, char *s) {
    int i = 0;
    
    if (n == 0) {
        s[0] = '0';
        s[1] = '\0';
        return s;
    }
    
    s[i++] = '0';
    //保证第一位是0；
    while (n > 0) {
        s[i++] = n % 8 + '0';
        //意思是把数字转换为字符格式
        n = n / 8;
    }
    s[i] = '\0';
    //按位逆序输出
    int left = 1, right = i - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    
    return s;
}

int main() {
    unsigned int n;
    char s[100];
    
    scanf("%u", &n);
    conv(n, s);
    printf("%s\n", s);
    
    return 0;
}