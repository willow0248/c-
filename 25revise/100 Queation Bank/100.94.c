/*输入一个正整数 n，输出 n 行空心的数字金字塔。
要求定义和调用函数 hollow_pyramid ( n )输出 n 行空心的数字金字塔。当 n=5 时，5 行空心的数字金字塔如下所示。
    1
   2 2
  3   3
 4     4
555555555*/
#include <stdio.h>

void hollow_pyramid(int n) {
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++){
            if(j==0 || j=2*i-2){
                printf("%d",i);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<2*n-1;i++){
        printf("%d",n);
    }
}

int main() {
    int n;
    // 输入正整数n
    scanf("%d", &n);
    // 调用自定义函数输出空心数字金字塔
    hollow_pyramid(n);
    return 0;
}