/*输入两个正整数 m 和 n（m<=1000,n<=1000），求其最大公约数和最小公倍数。试编写相应程序。*/
#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int min=m<n?m:n;
    int max=m>n?m:n;
    int a=0,b;
    if(max%min==0){
        a=min;
    }else{
        for(int i=min-1;i>1;i--){
        if(m%i==0){
            if(n%i==0){
                a=i;
                break;
            }
        }
        }
    }
    if(max%min==0){
         b=min;
    }else{
        b=a*(m/a)*(n/a);
    }
    printf("%d %d",a,b);
    return 0;
}