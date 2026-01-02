/*输入一个正整数 n (1<n≤10)，再输入 n 个整数，将它们从大到小排序后输出。试编写相应程序。
输入格式：
3
1 2 3
输出结果：
3 2 1*/
#include <stdio.h>
int main()
{
    int n,i,j,temp;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]<a[j+1])
            {   temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i==0) printf("%d",a[i]);
        else printf(" %d",a[i]);
    }
    return 0;
}