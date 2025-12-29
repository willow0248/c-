/*某小学最近得到了一笔赞助，打算拿出其中一部分为学习成绩优秀的前5名学生发奖学金。
期末，每个学生都有3门课的成绩:语文、数学、英语。
先按总分从高到低排序，
如果两个同学总分相同，再按语文成绩从高到低排序，
如果两个同学总分和语文成绩都相同，那么规定学号小的同学排在前面，
这样，每个学生的排序是唯一确定的。

任务：
先根据输入的3门课的成绩计算总分，
然后按上述规则排序，最后按排名顺序输出前五名名学生的学号和总分。
注意，在前5名同学中，每个人的奖学金都不相同，因此，你必须严格按上述规则排序。
例如，在某个正确答案中，如果前两行的输出数据(每行输出两个数:学号、总分) 是:
7 279
5 279
这两行数据的含义是:
总分最高的两个同学的学号依次是7号、5号。
这两名同学的总分都是 279 (总分等于输入的语文、数学、英语三科成绩之和) ，
但学号为7的学生语文成绩更高一些。如果你的前两名的输出数据是:
5 279
7 279
则按输出错误处理，不能得分。

输入格式
包含n+1行:

第1行为一个正整数n（小于300），表示该校参加评选的学生人数。
第2到n+1行，每行有3个用空格隔开的数字，每个数字都在0到100之间。
第j行的3个数字依次表示学号为 j-1 的学生的语文、数学、英语的成绩。
每个学生的学号按照输入顺序编号为1~n (恰好是输入数据的行号减1)。
输出格式
共有5行，每行是两个用空格隔开的正整数，依次表示前5名学生的学号和总分。
*/
#include <stdio.h>
#include <stdlib.h>  // qsort排序函数必须的头文件


typedef struct {
    int id;         
    int chinese;    
    int math;       
    int english; 
    int total;     
} Student;

int cmp(const void *a, const void *b) {
    Student *stuA = (Student *)a;
    Student *stuB = (Student *)b;
    // 优先级1：总分降序 → 大的在前，返回 后-前
    if (stuA->total != stuB->total) return stuB->total - stuA->total;
    // 优先级2：语文降序 → 同上
    if (stuA->chinese != stuB->chinese) return stuB->chinese - stuA->chinese;
    // 优先级3：学号升序 → 小的在前，返回 前-后
    return stuA->id - stuB->id;
    /*返回值 > 0：a 排在 b 后面；
    返回值 < 0：a 排在 b 前面；
    返回值 = 0：a 和 b 顺序不变。*/
}
int main() {
    int n;
    scanf("%d", &n); 
    
    Student students[300]; 
    
    for (int i = 0; i < n; i++) {
        students[i].id = i + 1; 
        scanf("%d %d %d", &students[i].chinese, &students[i].math, &students[i].english);
        students[i].total = students[i].chinese + students[i].math + students[i].english;
    }
    
    // 使用qsort快速排序，调用自定义的cmp排序规则
    qsort(students, n, sizeof(Student), cmp);
    /*
    students：要排序的数组首地址（结构体数组名）；
    n：要排序的元素个数（学生人数）；
    sizeof(Student)：单个元素的字节大小（结构体占用内存）；
    cmp：自定义的排序规则函数名（核心）。
    */
    
    for (int i = 0; i < 5; i++) {
        printf("%d %d\n", students[i].id, students[i].total);
    }
    
    return 0;
}