/*给定一个由英文字符、数字、空格和英文标点符号组成的字符串，长度不超过2000，请将其切分为单词，
要求去掉所有的非英文字母，然后将单词全部转换成小写，再按照字典序升序排列，每个单词之间用空格分隔。

例如有文本：
Python was created in 1990 by Guido at Centrum (CWI, see http://www.cwi.nl) in the Netherlands.

处理完成之后得到以下单词序列：
at by centrum created cwi cwi guido http in in netherlands nl python see the was www

输入格式
一行字符串，含有英文字符、数字、空格和英文标点符号
输出格式
处理后的单词序列，单词之间用空格隔开

输入样例
The Python Software Foundation (PSF, see https://www.python.org/psf/) was formed.
输出样例
formed   foundation   https   org   psf   psf   python   python   see   software   the   was   www*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define INPUT_MAX 2048    // 输入字符串最大长度（留冗余）
#define WORD_TOTAL 1000   // 最大单词存储量
#define WORD_LEN_MAX 64   // 单个单词最大长度

// 存储提取后的所有单词
char words[WORD_TOTAL][WORD_LEN_MAX];
//带空格的字符串，储存为一个二维数组
int word_num = 0; // 有效单词计数

// ✅ 排序比较函数（修复指针强转，适配二维字符数组，根源解决崩溃）
int cmp(const void *a, const void *b) {
    // 二维字符数组的正确比较方式，避免非法指针访问（其实不怎么看得懂这里的转化，不管他，背）
    return strcmp( (const char*)a, (const char*)b );
    //这里涉及到strcmp和qsort返回值大小的问题，不如直接记住，字典序升序就是ab，反之，降序就是ba
}

int main(){
    char input[INPUT_MAX] = {0}; 
    // 1. 安全读取整行输入，兼容空格/标点/换行
        if (fgets(input, INPUT_MAX, stdin) == NULL) {
            return 1; // 读取失败直接退出，避免后续错误
        }

    char temp_word[WORD_LEN_MAX] = {0}; // 临时缓存单词，初始化清零
    int temp_len = 0;

    // 2. 过滤非字母 + 提取单词 + 统一转小写
    for(int i = 0; input[i] != '\0'; i++){
        // 是字母则转小写存入临时单词，严格限制单词语长防越界
        if(isalpha(input[i])) {
            if(temp_len < WORD_LEN_MAX - 1) { // 留1位给'\0'，绝对安全（考场上不写这行问题不大）
                temp_word[temp_len++] = tolower(input[i]);
                /*
                tolower:
                包含在头文件ctype.h里面；只将A-Z转为小写字母
                */
            }
        }
        // 非字母+临时单词有内容 → 完成单词提取
        // 当前字符【不是字母】（空格、标点、数字），且缓存盒里有内容
        else if(temp_len > 0) {
            temp_word[temp_len] = '\0'; // 补结束符，形成合法字符串
            strcpy(words[word_num++], temp_word);
            temp_len = 0;
            memset(temp_word, 0, sizeof(temp_word)); // 清空临时缓存
            //将temp-word里的sizeof(temp_word)长度的字符全赋值为0
        }
    }

    // 处理字符串末尾的最后一个单词（避免遗漏）
    if(temp_len > 0) {
        temp_word[temp_len] = '\0';
        strcpy(words[word_num++], temp_word);
    }

    // 3. 按字典序升序排序（无非法指针访问）
    if(word_num > 0) { 
        // ✅ 【核心修复3】空数据保护，无单词则不排序
        qsort(words, word_num, sizeof(words[0]), cmp);
    }

    // 4. 格式化输出：单词间空格分隔，无多余空格
    for(int i = 0; i < word_num; i++) {
        if(i > 0) printf(" "); // 第一个单词前无空格，更规范
        printf("%s", words[i]);
    }
    printf("\n");

    return 0;
}