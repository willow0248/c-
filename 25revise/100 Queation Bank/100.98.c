/*有 n 个整数，使前面各数顺序向后移 m 个位置，移出的数再从开头移入。
编写一个函数实现以上功能，在主函数中输入 n 个整数并输出调整后的 n 个数。
试编写相应程序。*/
#include<stdio.h>
void fn(int list[],int n,int x){
    int output[200];
    x%=n;
    for(int i=0;i<x;i++){
        output[i]=list[n-x+i];
    }
    for(int i=x;i<n;i++){
        output[i]=list[i-x];
    }
    for(int i=0;i<n;i++){
        list[i]=output[i];
    }
}
int main(){
    int n,a[200],x;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fn(a,n,x);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}