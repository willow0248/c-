/*给出一名学生的语文和数学成绩，
判断他是否恰好有一门课不及格(成绩小于60分)。若该生恰好有一门课不及格，输出1；否则输出0。
输入格式
一行，包含两个在0到100之间的整数，分别是该生的语文成绩和数学成绩。
输出格式
若该生恰好有一门课不及格，输出1；否则输出0。
输入样例
50 80
输出样例
1*/
#include <stdio.h>

int main() {
    int chinese,math;
    scanf("%d %d", &chinese, &math);

    if(chinese>=60&&math>=60){
        printf("0");
    } else if(chinese>=60||math>=60){
        printf("1");
    } else{
        printf("0");
    }
    return 0;
}