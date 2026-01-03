/*一对兔子，从出生后第 3 个月起每个月都生一对兔子。小兔子长到第 3个月后每个月又生一对兔子。
假如兔子都不死，请问第 1 个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到 n 对？
输入一个不超过 10000 的正整数 n，输出兔子总数达到 n 最少需要的月数。试编写相应程序。*/
//本质是斐波那契数列
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m1=1,m2=0;
    int month=0;
    int sum=0;
    while(1){
        sum=m1+m2;
        int temp=m2;
        m2=m1+temp;
        m1=temp;
        month++;
        if(sum>=n){
            break;
        }
        
    }
    printf("%d",month);
    return 0;
}