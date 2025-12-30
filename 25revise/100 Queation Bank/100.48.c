/*猴子第一天摘下若干个仙桃，当即吃了一半，还不过瘾，又多吃了一个。
第二天早上又将剩下的仙桃吃掉一半，又多吃一个。
以后每天早上都吃了前一天剩下的一半零一个。
到第N天早上想再吃时，见只剩下一个仙桃。求第一天共摘多少仙桃。
输入： N 
输出： 仙桃总数*/
#include<stdio.h>

int eatPeach(int days) {
    if(days==1){
        return 1;
    }else{
        return (eatPeach(days-1)+1)*2;
    }
}
//递归还不会写，老己，你要干嘛。。。。
int main()
{
    int days;
    scanf("%d", &days);
    printf("%d",eatPeach(days));
}

