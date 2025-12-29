/*我国的高考志愿投档是严格按照高考分数从高到低的顺序排列，排列的规则如下：
首先按照总分降序排列；当总分相同时，再按照语文分数降序排序；
当语文分数也相同时，再按照数学分数降序排序；当数学分数也相同时，再按照英语分数降序排序。
所有分数都相同时，再按照录入的顺序排列。这样，每个考生的位序都是唯一的。
现在给定n（10≤n≤1000）个人的有关信息，按照上述规则排序之后，输出最前面的m（1≤m≤n）个人的序号。

输入格式
第一行是两个整数n和m，表示后续有n个考生的信息，要求输出m个考生的序号。
从第2行到n+1行，每行一个考生的信息，依次是：语文分、数学分、英语分。 
注意：学生的序号从1开始计数，就是它所在的行号减一

输出格式
输出m个整数，表示排序后的前m个考生的序号，整数之间用空格分隔。
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 1100
typedef struct student
{
    int id;
    int chinese;
    int englishi;
    int math; 
    int total;
}Student;

int cmp(const void *a,const void *b){
    Student *stuA=(Student *)a;
    Student *stuB=(Student *)b;
    if(stuA->total!=stuB->total) return stuB->total-stuA->total;
    if(stuA->chinese!=stuB->chinese) return stuB->chinese-stuA->chinese;
    if(stuA->math!=stuB->math) return stuB->math-stuA->math;
    if(stuA->englishi!=stuB->englishi) return stuB->englishi-stuA->englishi;
    return stuA->id-stuB->id;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    Student student[MAX];
    for(int i=0;i<n;i++){
        student[i].id=i+1;
        scanf("%d %d %d",&student[i].chinese,&student[i].math,&student[i].englishi);
        student[i].total=student[i].chinese+student[i].math+student[i].englishi;
    };
    qsort(student,n,sizeof(Student),cmp);
    for(int i=0;i<m;i++){
        printf("%d ",student[i].id);
    }
    return 0;
}