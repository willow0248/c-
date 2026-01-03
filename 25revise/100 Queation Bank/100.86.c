/*输入一个正整数 n（3<=n<=7），输出所有的 n 位水仙花数。水仙花数是
指一个 n 位正整数，它的各位数字的 n 次幂之和等于它本身。
例如 153 的各位数字的立方和是 1^3+5^3+3^3=153。试编写相应程序。*/
#include<stdio.h>
#include<math.h>

/*int fn(int num,int n){
    int sum=0;
    while(num>0){
        int a=num%10;
        num/=10;
        sum+=pow(a,n)+0.5;
    }
    return sum;
}*/
//pow的缺点：计算的是浮点数，有精度损失的风险，而且计算较慢

int main(){
    int n;
    scanf("%d",&n);
    int high,low;
    switch (n){
    case 3:high=1000;low=99;break;
    case 4:high=10000;low=999;break;
    case 5:high=100000;low=9999;break;
    case 6:high=1000000;low=99999;break;
    default:high=10000000;low=999999;break;
    }
    for(int i=low+1; i<high; i++){
        int num = i;  
        int sum = 0;  
        while(num > 0){
            int digit = num % 10; 
            num /= 10;
            //整型循环累乘 替代 pow()，无浮点、无精度丢失、速度极快
            int power = 1;
            for(int j=0; j<n; j++){
                power *= digit;
            }
            sum += power;
        }
        
        if(sum == i){  
            printf("%d\n", i);
        }
    }
    return 0;
}