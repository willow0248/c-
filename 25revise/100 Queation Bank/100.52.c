/* 兔子第一天挖出若干个胡萝卜，当即吃了一半，不过瘾，又多吃了一个。
第二天早上又将剩下的胡萝卜吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下n个胡萝卜了。求第一天共摘了多少个胡萝卜。

输入：第10天剩下的胡萝卜数
输出：第1天总共摘的胡萝卜数

输入实例：1
输出实例：1534

 */
#include<stdio.h>

int GetNumber(int n){
   int day=10;
   int sum=n;
   while(day>1){
        sum=(sum+1)*2;
        day--;
   }
   return sum;
}
int main(){
    
    int n;
    scanf("%d",&n);
    printf("%d",GetNumber(n));
}