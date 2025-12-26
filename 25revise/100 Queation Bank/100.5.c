/*给定n（1≤n≤100）个学生的姓名和成绩，按照成绩从高到低排序输出。学生的姓名不会重复，如果有成绩相同的，则原来在名单中靠前的同学仍然排列在前面。
例如有一个班的成绩如下：
Deirdr 89
Sheil 50
Cynthi 63
Rene 66
Emm 46
Myrn 42
Nicol 63
Prudenc 66
Adel 79
排序之后为：
Deirdr 89
Adel 79
Rene 66
Prudenc 66
Cynthi 63
Nicol 63
Sheil 50
Emm 46
Myrn 42
注意：Rene排在Prudenc之前，Cynthi排在Nicol之前。

输入格式
第一行是一个整型数n，表示后面有n个学生的数据。从第二行到第n+1行，每行表示一个学生的数据，第一列是学生的姓名，第二列是学生的成绩（都是100以内的正整数），中间以空格分隔

输出格式
排序得到的结果，每行一个学生的数据，第一列是姓名，第二列是他的成绩，中间以空格分隔。
输入样例
6
Jesu  76
Ia  90
Conno  80
Carso  75
Ayde  79
Austi  78
输出样例
Ia 90
Conno 80
Ayde 79
Austi 78
Jesu 76
Carso 75*/
#include<stdio.h>
struct student{
    char name[30];
    int source;
};
int main(){
    struct student stu[200];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d",stu[i].name,&stu[i].source);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(stu[j].source<stu[j+1].source){
                struct student temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s %d\n",stu[i].name,stu[i].source);
    }
    return 0;
}