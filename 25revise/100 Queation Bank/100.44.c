/*输入两个二维平面向量 V1=(x1, y1)和 V2=(x2, y2)的分量，计算并输出
两个向量的和向量。试编写相应程序。
输入实例
1 2 3 4
输出实例
(4.0, 6.0)*/
 #include <stdio.h>

int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double sum_x = x1 + x2;
    double sum_y = y1 + y2;
    printf("(%.1f, %.1f)\n", sum_x, sum_y);
    //注意一下输入和输出的时候都用浮点数
    return 0;
}