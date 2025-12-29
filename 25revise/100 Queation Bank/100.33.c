/*给定一个由英文字符、数字、空格和英文标点符号组成的字符串，长度不超过5000，
请将其切分为单词，要求去掉所有的非英文字母，然后将单词全部转换成小写，
然后统计每一个词出现的次数，输出频次最高的那个词以及它出现的次数。
如果有多个词的频次相同，则输出按字典序排列在最前面的那个。

例如给定字符串：String input = "1 fish 2 fish red fish blue fish";
频次最高的单词是fish，它出现了4次。

再比如给定字符串：If the digit is less than 10, then '0' + 
digit is returned. Otherwise, the value 'a' + digit - 10 is returned.
频次最高的单词是digit和is，都出现了3次。但是digit的字典序在is前面，所以应该输出digit和3。

输入格式
一个长度不超过2000的字符串，只有末尾有回车符。

输出格式
输出一行，首先是频次最高的那个单词，然后是它出现的次数，中间用空格分隔

输入样例
A character may be part of a Unicode identifier if and only if one of the following statements is true.
输出样例
a  2*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT 2000  // 输入字符串最大长度
#define MAX_WORDS 1000  // 最多存储的单词数
#define MAX_WORD_LEN 50 // 单个单词最大长度

// 单词-计数 结构体（语义更清晰）
typedef struct {
    char word[MAX_WORD_LEN]; // 单词内容
    int cnt;                 // 出现次数
} WordNode;

// ✅ 排序规则：频次降序 → 频次相同则字典序升序（核心不变）
int cmp(const void *a, const void *b) {
    WordNode *x = (WordNode*)a;
    WordNode *y = (WordNode*)b;
    if (x->cnt != y->cnt) {
        return y->cnt - x->cnt; // 次数多的排前面
    }
    return strcmp(x->word, y->word); // 次数相同，字典序小的排前面
}

// ✅ 封装：查找单词是否存在，存在返回下标，不存在返回-1（消除冗余核心）
int findWord(WordNode words[], int size, char *target) {
    for (int i = 0; i < size; i++) {
        if (strcmp(words[i].word, target) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char input[MAX_INPUT];   // 存储输入字符串
    WordNode words[MAX_WORDS];// 存储所有单词及计数
    int wordNum = 0;         // 有效单词的总数
    char currWord[MAX_WORD_LEN]; // 临时存储正在提取的单词
    int currLen = 0;         // 临时单词的当前长度

    // 1. 读取整行输入（兼容空格，适配题目输入格式）
    fgets(input, MAX_INPUT, stdin);

    // 2. 核心：遍历字符串，提取单词 + 过滤非字母 + 转小写（单循环搞定，无冗余）
    for (int i = 0; input[i] != '\0'; i++) {
        // 情况1：是字母 → 转小写，加入临时单词
        if (isalpha(input[i])) {
            currWord[currLen++] = tolower(input[i]);
        }
        // 情况2：非字母 + 临时单词有内容 → 处理这个完整单词
        else if (currLen > 0) {
            currWord[currLen] = '\0'; // 给单词补结束符，成为合法字符串
            currLen = 0;              // 重置临时单词长度
            
            // 查重+计数（调用封装函数，一行搞定）
            int pos = findWord(words, wordNum, currWord);
            if (pos != -1) {
                words[pos].cnt++;     // 单词已存在，计数+1
            } else {
                strcpy(words[wordNum].word, currWord); // 新单词存入
                words[wordNum++].cnt = 1;
            }
        }
    }

    // 3. 排序：直接调用qsort，规则不变
    qsort(words, wordNum, sizeof(WordNode), cmp);

    // 4. 输出结果：排序后第一个就是答案
    printf("%s %d\n", words[0].word, words[0].cnt);

    return 0;
}