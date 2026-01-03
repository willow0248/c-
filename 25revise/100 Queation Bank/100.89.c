/*给定平面任意两点坐标(x1, y1)和(x2, y2)，求这两点之间的距离（保留２位小数）。
要求定义和调用函数dist(x1, y1, x2, y2)计算两点间的距离。
试编写相应程序。*/
#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1, dy = y2 - y1;
    return sqrt(dx*dx + dy*dy); 
}

int main() {
    double x1,y1,x2,y2;
    scanf("%lf%lf%lf%lf", &x1,&y1,&x2,&y2);
    printf("%.2f", dist(x1,y1,x2,y2));
    return 0;
}