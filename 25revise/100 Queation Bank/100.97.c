/*输入一个正整数 n (1<n<=10)，然后输入 n 个整数存入数组 a
中，再输入一个整数 x，在数组 a 中查找 x，
若找到则输出相应的下标，否则显示“Not found”。
要求定义和调用函数 search(int list[ ]，int n，int x)，
在数组 list 中查找元素 x，若找到则返回相应下标，否则返回-1，参数 n 代表数组 list 中元素的数量。试编写相应程序。*/
#include<stdio.h>
int search(int list[],int n,int x){
    for(int i=0;i<n;i++){
        if(list[i]==x) return i;
    }
    return -1;
}
int main(){
    int n,a[20],x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    if(search(a,n,x)==-1)  printf("Not found");
    else printf("index = %d", search(a,n,x));
    return 0;
}