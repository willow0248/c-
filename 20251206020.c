//P1428 小鱼比可爱
#include<stdio.h>
int main(){
    int n;
    int fish[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&fish[i]);
    }
    int cuter_number[100];
    cuter_number[0]=0;
    int cnt=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(fish[j]<fish[i]){
                cnt++;
            }
        }
        cuter_number[i]=cnt;
        cnt=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",cuter_number[i]);
    }
    return 0;
}