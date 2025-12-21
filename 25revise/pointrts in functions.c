#include<stdio.h>

void f(int *x,int *y)
//定义的时候是指针
{
	int t;
	t=*x;
    *x=*y;
    *y=t;
    //在交换数字的时候也是指针的形式
}
int in(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	return 0;
}
int main()
{   
    //注意p,q两个指针的利用，以及他们是如何移动的
    //以及何时用到指针，或者何时用到的是地址
	int a[8],i,*p,*q;
	in(a,8);

	p=a;q=a+7;//分别指向头和尾

	while(p<q){
		f(p,q);
        //传过去的是地址
        p++;
        q--;
	}
	for(i=0;i<8;i++) printf("%d ",a[i]);

	return 0;

}