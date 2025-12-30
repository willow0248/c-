/*输入 10 个学生的学号、姓名和成绩，输出学生的成绩等级和不及
格人数。每个学生的记录包括学号、姓名、成绩和等级，要求定义和调用函数 set_grade()，
根据学生成绩设置其等级，并统计不及格人数，
等级设置：85-100 为 A，
70-84 为 B，
60-69为 C，0-59 为 D。试编写相应程序。

输入实例
3
1002 liming 87
1003 wangli 88
1001 liulin 92

输出实例
The count for failed (<60): 0
The grades:
1002 liming A
1003 wangli A
1001 liulin A*/
#include <stdio.h>
#define N 10  // 最多10个学生，满足题目要求


typedef struct {
    int id;         
    char name[20]; 
    int score;      
    char grade;     
} Student;


int set_grade(Student stu[], int n) {
    int fail_cnt = 0;
    for (int i = 0; i < n; i++) {
        if (stu[i].score >= 85 && stu[i].score <= 100) {
            stu[i].grade = 'A';
        } else if (stu[i].score >=70 && stu[i].score <=84) {
            stu[i].grade = 'B';
        } else if (stu[i].score >=60 && stu[i].score <=69) {
            stu[i].grade = 'C';
        } else if (stu[i].score >=0 && stu[i].score <=59) {
            stu[i].grade = 'D';
            fail_cnt++;
        }
    }
    return fail_cnt;
    //返回不合格数，两个功能封装到一起，妙蛙种子回家了
}

int main() {
    Student students[N];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &students[i].id, students[i].name, &students[i].score);
    }
    
    int fail_num = set_grade(students, n);

    printf("The count for failed (<60): %d\n", fail_num);
    printf("The grades:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %c\n", students[i].id, students[i].name, students[i].grade);
    }
    
    return 0;
}