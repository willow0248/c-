/*判断输入的一串字符是否为“回文”。所谓“回文”是指顺读和倒读都一样的字符串。如“XYZYX”和“xyzzyx”都是回文。试编写相应程序。*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    scanf("%s",a);
    int flag=1;
    int len=strlen(a);
    for(int i=0;i<len/2;i++){
        if(a[i]!=a[len-1-i]){
            flag=0;
            break;
        }
    }
    if(flag) printf("YES");
    else printf("no");
    return 0;

}