/*给定一个由英文字符、数字、空格和英文标点符号组成的字符串，长度不超过2000，
请将其切分为单词，要求去掉所有的非英文字母，每行输出一个单词。
输入格式
一行字符串

输出格式
若干行，每行一个处理后的单词

输入样例
SyntaxError: cannot assign to literal
输出样例
SyntaxError
cannot
assign
to
literal*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
//基本逻辑和40，33差不多
#define MAX 2048

int main (){
    char input[MAX];
    char word[MAX][MAX];
    char temp[MAX];
    int word_num=0;
    int temp_len=0;

    fgets(input,MAX,stdin);
    
    for(int i=0;input[i]!='\0';i++){
        if(isalpha(input[i])){
            temp[temp_len++]=input[i];
            //将合规的字符存入暂时数组中
        }else if(temp_len>0){
            temp[temp_len]='\0';
            //不合规的，加终止，并清空暂时数组
            strcpy(word[word_num++],temp);
            temp_len=0;
            memset(temp,0,sizeof(temp));
        }
    }
    //处理最后一个单词
    if(temp_len > 0) {
        temp[temp_len] = '\0';
        strcpy(word[word_num++], temp);
    }
    for(int i=0;i<word_num;i++){
        printf("%s\n",word[i]);
    }
    return 0;
}
