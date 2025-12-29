/*判断一个数n 能否同时被3和5整除，如果能同时被3和5整除输出YES，否则输出NO。*/
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    if(n%3==0&&n%5==0){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}