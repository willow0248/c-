 #include <stdio.h>

int main() {
    double h;
    scanf("%lf", &h);
    
    double height = h;
    double total = h; // 第1次落下
    /*
    我的代码是第N次加上第N+1次的位移的累加，
    会导致将第十次落地后的升高的高度也算在内，
    正确且不容易出错的方式是，将每次反弹后的高度*2+初始高度
     */
    // 计算第2次到第10次落地
    for (int i = 1; i < 10; i++) {
        height /= 2;
        total += 2 * height; // 反弹上升 + 下一次落下
    }
    
    double bounce_height = height / 2; // 第10次落地后的反弹高度
    
    printf("%.4f\n", total);
    printf("%.4f\n", bounce_height);
    return 0;
    /*my wrong code:
    float h;
    scanf("%f",&h);
    float hi;
    hi=h;
    float sum=0;
    float m;
    int time=0;
    while(time<10){
        sum+=(hi/2.0)+hi;
        hi=hi/2.0;
        time++;
        if(time==10){
            m=hi;
        }
    }
    printf("%.4f\n%.4f",sum-m,m);
    */
}