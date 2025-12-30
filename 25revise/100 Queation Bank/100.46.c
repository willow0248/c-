/*建立一个通讯录，通信录的结构记录包括：
姓名、生日、电话号码，其中生日又包括三项：年、月、日。
编写程序，定义一个嵌套的结构类型，输入 n(n<10)个联系人的信息，再按他们的年龄从大到小的顺序依次输出其信息。
试编写相应程序。
输入格式:
第一行,人数n
第二行起，共n行，是n个联系人的信息，空格隔开
输出格式：
排序后n个联系人的信息，空格隔开

输入实例
3
wang 1998 3 12 12345678
li 2000 4 10 12345678
liu 2002 5 9 12345678
输出实例
wang   19980312  12345678
li  20000410   12345678
liu   20020509   12345678*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_N 10  // 限定人数n<10

// 子结构体：生日（年、月、日）
typedef struct Birth {
    int year;
    int month;
    int day;
} Birth;

typedef struct Contact {
    char name[20];   
    Birth birth;     
    char tel[20];    
} Contact;

int cmp(const void *a, const void *b) {
    // 仅保留强制类型转换，直接用指针访问嵌套成员做比较
    Contact *c1 = (Contact *)a;
    Contact *c2 = (Contact *)b;
    
    // 年龄从大到小排序 → 出生日期越早越靠前，直接访问成员对比
    if (c1->birth.year != c2->birth.year) {
        return c1->birth.year - c2->birth.year;
    } else if (c1->birth.month != c2->birth.month) {
        return c1->birth.month - c2->birth.month;
    } else {
        return c1->birth.day - c2->birth.day;
    }
    //比数字的时候，升序排序也是是12
}

int main() {
    Contact contacts[MAX_N]; 
    Contact temp;             
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d %s", 
               contacts[i].name,&contacts[i].birth.year,&contacts[i].birth.month,
               &contacts[i].birth.day,contacts[i].tel);
    }

     qsort(contacts, n, sizeof(Contact), cmp);
    
    for (int i = 0; i < n; i++) {
        printf("%s  %04d%02d%02d  %s\n",
               contacts[i].name,
               contacts[i].birth.year,
               contacts[i].birth.month,
               contacts[i].birth.day,
               contacts[i].tel);
    }
//自动补0
    return 0;
}