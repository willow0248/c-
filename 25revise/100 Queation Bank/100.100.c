/*输入一个字符串，再输入一个字符 ch，将字符串中所有的 ch 字符删除后输出该字符串。
要求定义和调用函数 delchar(s,c)，该函数将字符串 s 中出现的所有 c 字符删除。试编写相应程序。*/
#include<stdio.h>
#include<string.h>
void delchar(char s[],char c){
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=c){
            s[j++]=s[i];//！不知道咋总结，反正是这样写的
        }
    }
    s[j]='\0';
    //记得在末尾加0
}
int main(){
    char a[200],ch;
    scanf("%s",a);
    getchar();//不加这个读不到换行之后的符号，会错误
    scanf("%c",&ch);
    delchar(a,ch);
    printf("result: %s",a);
    return 0;

}