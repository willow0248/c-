/*输入平面上任意三个点的坐标(x1,y1)、(x2,y2)、(x3,y3)，检验它们能否构成三角形。
如果这 3 个点能构成一个三角形，输出周长和面积（保留 2 位小数）；
否则，输出“Impossible”。试编写相应程序。*/
#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, perimeter, area, p;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    
    if(a+b>c && a+c>b && b+c>a)
    {
        perimeter = a + b + c;
        p = perimeter / 2.0;
        area = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("L = %.2f, A = %.2f", perimeter, area);
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}