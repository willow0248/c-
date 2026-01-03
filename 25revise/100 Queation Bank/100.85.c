/*皮球从 height（米）高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。
问皮球在第 n 次落地时，在空中一共经过多少距离？第 n 次反弹的高度是多少？输出保留 1 位小数。试编写相应程序。*/
#include<stdio.h>
int main(){
    int height,n;
    scanf("%d%d",&height,&n);
    double x=height,h=height;
    for(int i=1;i<n;i++){
        x+=h;
        h/=2.0;
    }
    double hn;
    hn=h/2;
    printf("%.1lf %.1f",x,hn);

    return 0;
}