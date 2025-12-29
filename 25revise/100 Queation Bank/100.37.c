/* 我国现有x亿人口，按照每年0.1%的增长速度，n年后将有多少人？计算结果保留小数点后四位输出。
输入格式
一行，包含两个整数x和n，分别是人口基数和年数，以单个空格分隔。

输出格式
输出最后的人口数，以亿为单位，保留到小数点后四位。1≤x≤100,1≤n≤100。

输入样例
13 10
输出样例
13.1306
*/
#include<stdio.h>
double fn(int x,int n){
    if(n==0){
        return x;
    }
    return fn(x,n-1)*1.001;
}
int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    double num=fn(x,n);
    printf("%.4lf",num);
    return 0;
}