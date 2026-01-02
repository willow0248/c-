/*根据邮件的重量和用户是否选择加急计算邮费。
计算规则：重量在1000克以内(包括1000克), 基本费8元。
超过1000克的部分，每500克加收超重费4元，不足500克部分按500克计算；
如果用户选择加急，多收5元。

输入格式
输入一行，包含整数和一个字符，以一个空格分开，分别表示重量（单位为克）和是否加急。如
果字符是y，说明选择加急；如果字符是n，说明不加急。

输出格式
输出一行，包含一个整数，表示邮费。

输入样例
1200 y
输出样例
17*/
#include <stdio.h>

int main() {
    int weight;  
    char urgent;  
    int postage = 8; 

    scanf("%d %c", &weight, &urgent);
    if (weight > 1000) {
        int over = weight - 1000;
        // 不足500克按500克算 → 向上取整公式 (over + 499) / 500
        //int over_charge = ((over + 499) / 500) * 4;
        int over_charge=over/500;
        if(over_charge*500<over){
            over_charge++;
        }
        postage += over_charge*4;
    }
    
    if (urgent == 'y' || urgent == 'Y') {
        postage += 5;
    }
    
    printf("%d\n", postage);
    return 0;
}