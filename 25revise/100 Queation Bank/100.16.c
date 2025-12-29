/*计算非负整数m到n(包括m和n)之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。*/
#include <stdio.h>

int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    int sum=0;
    for (int i = m; i <= n; ++i) {
        if(i%2!=0){
            sum+=i;
        }
    }

    printf("%d", sum);

    return 0;
}
