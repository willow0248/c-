/*使用函数验证哥德巴赫猜想：
任何一个不小于 6 的偶数均可表示为两个奇素数之和。
例如 6=3+3，8=3+5，…，18=5+13。将m～n之间(6<=m,n<=100)的偶数都表示成两个素数之和，
然后输出这些偶数的表示，一行打印5组。
   输入格式：
   6 8
   输出结果：
   6=3+3 8=3+5*/
#include<stdio.h>

int fn2(int b){
    for(int i=2;i<b;i++){
        if(b%i==0){
            return 0;
        }
    }
    
    return 1;
}
void fn1(int a){
    for(int i=3;i<a;i+=2){
        if(fn2(i)==1 && fn2(a-i)==1){
            printf("%d=%d+%d ",a,i,a-i);
            break;
        }
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int flag=0;
    for(int i=n;i<=m;i++){
        if(i%2==0){
            fn1(i);
            flag++;
            if(flag%5==0) printf("\n");
        }
       
    }
    return 0;
}