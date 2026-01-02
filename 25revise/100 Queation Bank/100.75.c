/*某城市普通出租车收费标准如下：起步里程为 3 公里，起步费 10 元；
超起步里程后 10 公里内，每公里 2 元；超过 10 公里以上的部分加收 50%的回空补贴费，即每公里 3 元；
营运过程中，因路阻及乘客要求临时停车的，按每 5 分钟 2 元计收(不足 5 分钟则不收费 )。
运价计费尾数四舍五入，保留到元。
编写程序，输入行驶里程（公里）与等待时间（分钟），计算并输出乘客应支付的车费（元）。*/
#include <stdio.h>
#include <math.h>
int main()
{
    double mileage;
    int wait;
    double fare = 0.0;
    scanf("%lf %d", &mileage, &wait);
    if(mileage <= 3.0)
        fare = 10.0;
    else if(mileage <= 10.0)
        fare = 10.0 + (mileage - 3.0) * 2.0;
    else
        fare = 10.0 + 7.0 * 2.0 + (mileage - 10.0) * 3.0;
    fare += (wait / 5) * 2.0;
    fare = round(fare);//四舍五入的函数
    printf("%.0f", fare);
    return 0;
}