/*使用函数累加由 n 个 a 构成的整数之和：
输入两个正整数 a 和 n, 求 a+aa+aaa+aa…a(n 个a)之和。
要求定义并调用函数 fn(a,n)，它的功能是返回 aa…a(n 个 a)。
例如，输入：3 2，两个输入数用空格隔开，就是求3+33之和，则fn(3,2)的返回值是36。
试编写相应程序。
   输入：3 2
   输出：sum=36*/
   #include<stdio.h>
int fn(int a,int n){
    int b=0;
    for(int i=0;i<n;i++){
        b=10*b+1;
    }
    return a*b;
}
int main(){
    int a,n;
    int sum=0;
    scanf("%d%d",&a,&n);
    for(int i=1;i<=n;i++){
        sum+=fn(a,i);
    }
    printf("sum=%d",sum);
    return 0;
}