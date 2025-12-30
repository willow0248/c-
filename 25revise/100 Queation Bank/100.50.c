/*题目：
    小明总喜欢问别人的年龄，然后根据自己的年龄和生肖计算别人的生肖，
    编写函数shengxiao帮助小明完成该功能。
    注：十二生肖的顺序是：猪、狗、鸡、猴、羊、马、蛇、龙、兔、虎、牛、鼠，
    即如果小明8岁属猪，则如果小张9岁就属狗，小王12岁属羊。
    样例输入：8 1 9
    样例输出：2
*/
#include <stdio.h>

int shengxiao(int ming_age, int ming_zodiac, int another_age) {
    // 计算年龄差
    int diff = another_age - ming_age;
    
    // 计算生肖位置（考虑循环）
    int zodiac = (ming_zodiac-1 + diff) % 12;
    //终于跑出来一个像人写的代码了。
    //原来题目的标号是1到12，反人类。在函数计算的时候，把标号改为0到11
    //记得和约瑟夫环问题里面的循环区别一下。
    // 处理负数情况
    if (zodiac < 0) {
        zodiac += 12;
    }
    
    return zodiac+1;
    //输出的时候再记得把标号复原成1到12
}

int main() {
    int ming_age, ming_zodiac, another_age;
    scanf("%d %d %d", &ming_age, &ming_zodiac, &another_age);
    printf("%d\n", shengxiao(ming_age, ming_zodiac, another_age));
    return 0;
}