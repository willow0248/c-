#include <stdio.h>
#include<string.h>
void delchar(char s[], char ch) {
    int j=0;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]!=ch){
            s[j++]=s[i];
        }
    }
    s[j]='\0';
}
int main() {
    char str[100], ch;
    gets(str);
    scanf("%c", &ch);
    delchar(str, ch);
    puts(str);
    return 0;
}
