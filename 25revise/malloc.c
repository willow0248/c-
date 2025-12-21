#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    //malloc的用法包括如下四步
    // 1，获取数组大小
    printf("请输入数组大小: ");
    scanf("%d", &size);
    // 2，分配内存
    int *arr = (int *)malloc(size * sizeof(int));
    // 3，检查分配是否成功
    if (arr == NULL) {
        fprintf(stderr, "内存分配失败!\n");
        return 1;
    }


    // 填充数组
    printf("请输入%d个整数:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // 计算平均值
    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float average = sum / size;
    // 输出结果
    printf("平均值: %.2f\n", average);
    
    // 4，释放内存
    free(arr);
    arr = NULL;
    
    return 0;
}