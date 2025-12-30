/*编写一个函数 king，实现猴子选大王的功能，输出 N（数据由平台提供，已获取，直接使用即可） 只猴子中谁是猴子大王的。
具体要求如下：

让 N 只候选猴子围成一圈（最多 100 只猴子），从某位置起顺序编号为 1-N 号；
从第 1 号开始报数，每轮从 1 报到 3 ，凡报到 3 的猴子即退出圈子，接着又从紧邻的下一只猴子开始同样的报数；
如此不断循环，最后剩下的一只猴子就选为猴王。
测试举例
输入：5
输出：4号猴子是大王。*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int monkey[101];
    for(int i=1;i<=n;i++){
        monkey[i]=1;
    }
    //编号从1开始，monkey[0]没有用到
    int reminder=n;//剩余猴子
    int num=1;//报数
    int cur=1;//当前猴子
    while(reminder>1){
        //这里是大于1.带点脑子想想。真服了
        if(monkey[cur]==0){
            cur=(cur%n)+1;
            //保证数字一直在1~N之间循环
            continue;
            //记得跳过本次循环！！！
        }
        if(num==3){
            monkey[cur]=0;
            num=1;
            reminder--;
        }else{
            num++;
        }
        cur=(cur%n)+1;
    }
     for(int i=1;i<=n;i++){
        if(monkey[i]=1){
            printf("%d号猴子是大王。\n",i);
            return 0;
        }
    }
    //求你了，能不能好好写一篇猴子题目！！！！次次考，次次错！！
}