/*按照规定，在高速公路上行使的机动车，超出本车道限速的 10%则处200元罚款；
若超出 50%，就要吊销驾驶证。请编写程序根据车速和限速自动判别对该机动车的处理。*/
#include <stdio.h>
int main()
{
    int speed, limit;
    scanf("%d %d", &speed, &limit);
    double exceed = (speed - limit) * 100.0 / limit;
    if(exceed >= 50.0)
        printf("Exceed %.0lf%% License Revoked",exceed);
    else if(exceed >= 10.0)
        printf("Exceed %.0lf%% Ticket 200",exceed);
    else
        printf("OK");
    return 0;
}
