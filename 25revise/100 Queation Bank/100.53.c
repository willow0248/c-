/*题目：在一笼子里，鸡和兔的个数共m只，脚有n只，
编写函数myChicken来计算鸡和兔各多少只？计算结果存放在参数c（鸡的只数）和r（兔的只数）中。

样例输入：100 300

样例输出：
共有50只鸡
共有50只兔*/
#include <stdio.h>

void myChicken(int m, int n, int *c, int *r) {
    
    *c = (4 * m - n) / 2;  
    *r = m - *c;           
}

int main() {
    int m, n;          
    int chicken, rabbit; 
    
    scanf("%d %d", &m, &n); 

    myChicken(m, n, &chicken, &rabbit);
    
    printf("共有%d只鸡\n", chicken);
    printf("共有%d只兔\n", rabbit);
    
    return 0;
}