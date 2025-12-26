/*输入n个整数，计算这些数的平均值，再输出所有大于平均值的数。
例如，输入:
     10
     55 23 8 11 22 89 0 -1 78 186
    输出：
     55 89 78 186*/
#include<stdio.h>
int main(){
    int n;
    int a[100];
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int aver=sum/n;
    for(int i=0;i<n;i++){
        if(a[i]>aver){
            printf("%d ",a[i]);
        }
    }
    return 0;
}