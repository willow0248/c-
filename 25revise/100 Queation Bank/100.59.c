/*使用函数输出指定范围内的 Fibonacci 数：输入两个正整数 m 和 n(1<=m,n<=10000)，
输出 m ～ n之间所有的 Fibonacci 数。Fibonacci 序列（第 1 项起）：1 1 2 3 5 8 13 21……。
要求定义并调用函数 fib(n)，它的功能是返回第 n 项 Fibonacci数。例如，fib(7)的返回值是 13。
试编写相应程序。
   输入格式：
   1 4
   输出结果：
   1 1 2 3*/
#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    /*for(int i=m;i<=n;i++){
        if(i==m){
            printf("%d",fib(i));
        }else{
            printf(" %d",fib(i));
        }
    }*/
    int num=1;
    while(1){
        int fib_num=fib(num);
        if(fib_num>n){
            break;
        }
        if(fib_num>=m && fib_num<=n){
            printf("%d ",fib_num);
           
        } 
        num++;
    }
    
    return 0;
}