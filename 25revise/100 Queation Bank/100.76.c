/*输入一个正整数 n，再输入 n 个学生的成绩，统计五分制成绩的分布。
百分制成绩到五分制成绩的转换规则：大于或等于 90 分为 A，
小于 90 分且大于或等于 80分为 B
，小于 80 分且大于或等于 70 为 C，
小于 70 分且大于或等于 60 为 D，小于 60 分为E。试编写相应程序。*/
#include <stdio.h>
int main()
{
    int n, score, a=0, b=0, c=0, d=0, e=0, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if(score >= 90) a++;
        else if(score >= 80) b++;
        else if(score >= 70) c++;
        else if(score >= 60) d++;
        else e++;
    }
    printf("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}