/*用结构类型表示时间内容（时间以时、分、秒表示），输入一个时间数值（ h:m:s 的格式），
再输入一个秒数 n（n<60），以 h:m:s 的格式输出该时间再过 n 秒后的时间值(超过 24 点就
从 0 点开始计时)。试编写相应程序。
输入实例
8:23:50
20
输出实例
8:23:50*/
#include<stdio.h>
typedef struct Time
{
    int hour;
    int min;
    int second;
}time;

int main(){
    time t1;
    scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.second);
    int adds;
    scanf("%d",&adds);
    t1.second+=adds;
        if(t1.second>=60){
            t1.min++;
            if(t1.min>=60){
                t1.hour++;
                if(t1.hour>=24){
                    t1.hour-=24;
                } 
                 t1.min-=60;
            }
            t1.second-=60;
        }
    printf("%d:%d:%d",t1.hour,t1.min,t1.second);    
    return 0;
}
