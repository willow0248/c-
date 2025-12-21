#include<stdio.h>
int shengxiao(int ming_age,int ming_zodiac,int other_age){
   
    // 计算年龄差
    int age_diff = other_age - ming_age;
    
    // 计算生肖偏移量（考虑12生肖循环）
    int offset = age_diff % 12;
    if (offset < 0) {
        offset += 12;  // 处理负数情况
    }
    
    // 计算别人的生肖序号
    int result = (ming_zodiac - 1 + offset) % 12 + 1;
    /*
    先ming_zodiac - 1：将1-12范围转换为0-11，便于模运算
    加上偏移量
    % 12：确保在0-11范围内
    + 1：转回1-12范围
    */
    return result;
}
int main(){
    /*题目：
    小明总喜欢问别人的年龄，然后根据自己的年龄和生肖计算别人的生肖，
    编写函数shengxiao帮助小明完成该功能。
    注：十二生肖的顺序是：猪、狗、鸡、猴、羊、马、蛇、龙、兔、虎、牛、鼠，
    即如果小明8岁属猪，则如果小张9岁就属狗，小王12岁属羊。
    样例输入：8 1 9
    样例输出：2
*/
    int ming,a,other,b;
    scanf("%d %d %d",&ming,&a,&other);
    b=shengxiao(ming,a,other);
    printf("%d",b);
}