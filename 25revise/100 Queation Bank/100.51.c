/*
    猴子吃桃问题：猴子摘下若干个桃子，第一天吃了桃子的一半多一个，
    以后每天吃了前一天剩下的一半多一个，
    到第n天吃以前发现只剩下一个桃子，
    要求编写函数GetNumber(int n)求出猴子共摘了几个桃子。
    */
#include<stdio.h>

int GetNumber(int n){
    if(n==1){
        return 1;
    }else{
        return (GetNumber(n-1)+1)*2;
    }
    //经典递归
}
int main(){
    
    int n;
    scanf("%d",&n);
    printf("%d",GetNumber(n));
}