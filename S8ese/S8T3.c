#include<stdio.h>
int move(int list[],int n,int m){
    int after[100];
    for(int i=0;i<m;i++){
        after[i]=list[i+m];
    }
    for(int i=m;i<n;i++){
        after[i]=list[i-m];
    }
    for(int i=0;i<n;i++){
        list[i]=after[i];
    }
}
int main(){
    int n,m;
    int before[100];
    printf("总位数：");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&before[i]);
    }
    printf("后移位数：");
    scanf("%d",&m);
    move(before,n,m);
    for(int i=0;i<n;i++){
        printf("%d ",before[i]);
    }
    return 0;
}