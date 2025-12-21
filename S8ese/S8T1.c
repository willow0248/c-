#include<stdio.h>
void splitfloat(float x,int *inpart,float *fracpart){
    *inpart=(int)x;
    *fracpart=x-*inpart;
}
int main(){
    float a,fra;
    int in;
    printf("请输入：");
    scanf("%f",&a);
    splitfloat(a,&in,&fra);
    printf("整数部分是：%d\n",in);
    printf("小数部分是：%f\n",fra);
    return 0;
}