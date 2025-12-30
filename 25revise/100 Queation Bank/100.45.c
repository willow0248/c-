/*从键盘输入 n(n<10)本书的名称和定价，从中查找定价最高和最低的书的名称和定价，并输出。试编写相应程序。
输入实例
3
english
2.5
math
3
computer
10
输出实例
10.00, computer
2.50, english
*/
#include <stdio.h>
#include <string.h>
#define NAME_LEN 50  

typedef struct Book {
    char name[NAME_LEN];
    double price;
} Book;

int main() {
    int n;
    
    scanf("%d", &n);
    getchar();  // 吸收数值后的换行符

    Book cur_book, max_book, min_book;

    fgets(cur_book.name, NAME_LEN, stdin);
    cur_book.name[strlen(cur_book.name)-1] = '\0'; 
    // 去除换行符（这个真的想不到！！！）
    scanf("%lf", &cur_book.price);
    getchar();

    max_book = cur_book;  
    min_book = cur_book;  // 第一本书默认是最低价

    for (int i = 1; i < n; i++) {
        fgets(cur_book.name, NAME_LEN, stdin);
        cur_book.name[strlen(cur_book.name)-1] = '\0';
        //去除换行符！！
        scanf("%lf", &cur_book.price);
        getchar();

        if (cur_book.price > max_book.price) {
            max_book = cur_book;  
        }
        if (cur_book.price < min_book.price) {
            min_book = cur_book;  
        }
    }

    printf("%.2f, %s\n", max_book.price, max_book.name);
    printf("%.2f, %s\n", min_book.price, min_book.name);

    return 0;
}