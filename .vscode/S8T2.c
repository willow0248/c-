#include<stdio.h>
int search(int list[],int n,int x){
    for(int i;i<n;i++){
    if(list[i]==x){
        return i;
        }
    }return -1;
}
int main(){
    int n,x;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    if((search(a,n,x))==-1){
        printf("Not Found");
    }else{
        printf("在%d处",search(a,n,x));
    }

    return 0;
}
