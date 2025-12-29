/*给定一个整数，判断该数是奇数还是偶数。如果n是奇数，输出odd；如果n是偶数，输出even。
输入格式
输入仅一行，一个大于零的正整数n。
输出格式
输出仅一行，如果n是奇数，输出odd;如果n是偶数，输出even。
输入样例
5
输出样例
odd*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n%2==0){
        printf("even");
    } else{
        printf("odd");
    }
    return 0;
}