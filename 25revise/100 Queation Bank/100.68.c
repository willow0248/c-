/*为了提倡居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的居民用户电价分为两个“阶梯”：
月用电量 50 千瓦时（含 50 千瓦时）以内的，电价为 0.53 元/千瓦时；超过 50 千瓦时的，
超出部分的用电量，电价上调 0.05 元/千瓦时。输入用户的月用电量（千瓦时），
计算并输出该用户应支付的电费（元）。若用电量小于 0，则输出"Invalid Value!"。
试编写相应程序。输出结果精确到小数点后两位。*/
#include <stdio.h>
int main()
{
    double power, fee;
    scanf("%lf", &power);
    if(power < 0){
        printf("Invalid Value!");
    }else if(power <= 50){
        fee = power * 0.53;
        printf("%.2f", fee);
    }else{
        fee = 50 * 0.53 + (power - 50) * 0.58;
        printf("%.2f", fee);
    }
    return 0;
}