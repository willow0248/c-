/*输入一个正整数 n（n 为奇数），打印一个高度为 n 的"*"菱形
图案。例如，当 n 为 7 时，打印出以下图案。试编写相应程序。
           *
         * * *
       * * * * *
     * * * * * * *
       * * * * *
         * * *
           **/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);  
    int half = n / 2; 

    for (int i = 0; i <half; i++){
        for (int j=0; j<half - i; j++){
            printf("  ");
        }
        for (int k=0; k<2 * i + 1; k++){
            printf("* ");
        }
        printf("\n"); 
    }

    for (int i = half; i >= 0; i--){
        for (int j = 0; j < half - i; j++){
            printf("  ");
        }
        for (int k = 0; k < 2 * i + 1; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}