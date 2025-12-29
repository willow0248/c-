/*
经过研究，小英发现了如下加密规律(括号中是一个“原文 -> 密文”的例子)
1.原文中所有的字符都在字母表中被循环左移了三个位置（dec -> abz）
2.逆序存储（abcd -> dcba ）
3.大小写反转（abXY -> ABxy）
比如密文是：abfnlbm
解密之后得到的原文是：PEOQIED

输入格式
一个加密的字符串。(长度小于150且只包含大小写字母)
输出格式
输出解密后的字符串。

输入样例
GSOOWFASOq

输出样例
Trvdizrrvj
*/
#include<stdio.h>
#include<string.h>
void fn1(char a[]){
    for(int i=0;a[i]!='\0';i++){
        a[i]+=3;
        /* if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
            a[i] += 3;}*/
       // 处理循环越界：右移3位超出字母范围则回退26位
            if ((a[i] > 'Z' && a[i]-3 <= 'Z') || (a[i] > 'z')) {
                a[i] -= 26;
            }
        
    }
}
void fn2(char a[]){
    char re[200];
    int len=strlen(a);
    for(int i=0;a[i]!='\0';i++){
        re[i]=a[len-1-i];
    }
    re[len] = '\0'; // 补全字符串结束符，避免乱码
    for(int i=0;a[i]!='\0';i++){
        a[i]=re[i];
    }
}
void fn3(char a[]){
    for(int i=0;a[i]!='\0';i++){
       /*if(a[i]>='A' && a[i]>='Z'){
            a[i]-='A'-'a';
        }else{
            a[i]+='A'-'a';
        }*/

        // 正确判断：大写字母 A-Z
        if(a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 'a' - 'A'; // 大写转小写
        } 
        // 小写字母 a-z
        else if(a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 'a' - 'A'; // 小写转大写
        }
    }   
}
int main(){
    char a[200];
    scanf("%s",a);
    fn3(a);
    fn2(a);
    fn1(a);
    printf("%s",a);
    return 0;
}
