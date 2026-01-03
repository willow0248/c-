/*输入x，计算并输出分段函数 f(x)的值。要求定义和调用函数sign(x)实现该分段函数。试编写相应程序。*/
 #include<stdio.h>
int main(){
    int m,n;
    scanf("%d",&m);
    if(m>0) n=1;
    if(m==0) n=0;
    if(m<0) n=-1;
    printf("f(%d) = %d",m,n);
    return 0;
}