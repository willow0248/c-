/*学校开放了两门选修课，规定每位同学只能选择其中一门。
但是有些同学不遵守规定，同时选择了两门课程，现在选课名单汇总出来了，
请你根据名单将同时选择了两门课程的同学挑选出来，并按照字典顺序升序排列。
输入格式
输入数据一共有4行。第一行是一个正整数m（1≤m≤100）表示选择A课程的同学数目，
第二行是所有选择A课程的同学姓名，中间以空格分隔。
第三行是一个正整数n（1≤n≤100）表示选择B课程的同学数目，
第四行是所有择B课程的同学姓名，中间以空格分隔。

输出格式
一行，所有重复选课的同学姓名，中间以空格分隔，按照字典顺序升序排列

输入样例
6
Thoma Austi Lia Sea Trista Brya 
7
Brya Camero Austi Lia Hunte Trista Jesu 
输出样例
Austi Brya Lia Trista*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a,b;
    char repeat[200][30];
    char a_word[200][30],b_word[200][30];
    int num=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%s",a_word[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        scanf("%s",b_word[i]);
    }
    for(int i=0;i<a;i++){
        int is_exist=0;
        for(int j=0;j<b;j++){
            if(strcmp(a_word[i],b_word[j])==0){
                
                for(int k=0;k<num;k++){
                    if(strcmp(b_word[j],repeat[k])==0){
                        is_exist=1;
                        break;
                    }
                }

                if(!is_exist){
                    strcpy(repeat[num++],a_word[i]);
                }
            }
        }
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1-i;j++){
            if(strcmp(repeat[j],repeat[j+1])>0){
                char temp[30];
                strcpy(temp,repeat[j]);
                strcpy(repeat[j],repeat[j+1]);
                strcpy(repeat[j+1],temp);
                
            }
        }
    }
    for(int i=0;i<num;i++){
        if(i==0)
        printf("%s",repeat[i]);
        else 
        printf(" %s",repeat[i]);
    }
}