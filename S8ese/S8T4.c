#include<stdio.h>
int main(){
    int n,m;
    int count=0,out=0;
    int a[100] = {0};
    scanf("%d %d",&n,&m);
     int i = 0;
    while (out < n) {
        if (a[i] == 0) count++;
        if (count == m) {
            printf("%d ", i + 1);
            a[i] = 1;
            out++;
            count = 0;
        }
        i = (i + 1) % n;
    }
    return 0;
}