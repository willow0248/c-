/*有 n 个人围成一圈，按顺序从 1 到 n 编好号。从第一个人开始报数，报到 m（m<n）的人退出圈子，
下一个人从 1 开始报数，报到 m 的人退出圈子。如此下去，直到留下最后一个人。
输入整数 n 和 m，并按退出顺序输出退出圈子的人的编号。试编写相应程序。*/
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[2048];

    for(int i=1;i<=n;i++){
        a[i]=1;        
    }
    int reminder=n;
    int cur=0;
    int term=1;
    while(1){
        if(a[term]==0){
            term=term%n+1; 
            continue;
        }
        cur++;
        if(cur==m){
            a[term]=0;
            printf("%d",term); 
            reminder--;
            cur=0;
        }
        term=term%n+1;
        if(reminder==1) break;
    }
    return 0;
}