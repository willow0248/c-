#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;      // 元素值
    int count;      // 出现次数
    int first_pos;  // 首次出现的位置（用于稳定排序）
} Element;

int main() {
    int n;
    scanf("%d", &n);
    
    // 读取原始数组
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 统计每个元素的频率
    Element *elements = (Element *)malloc(n * sizeof(Element));
    
    int unique_count = 0;  // 唯一元素计数
    
    for (int i = 0; i < n; i++) {
        int found = 0;
        // 检查当前元素是否已存在于统计中
        for (int j = 0; j < unique_count; j++) {
            if (elements[j].value == arr[i]) {
                elements[j].count++;  // 增加计数
                found = 1;
                break;
            }
        }
        // 如果是新元素，添加到统计数组
        if (!found) {
            elements[unique_count].value = arr[i];
            elements[unique_count].count = 1;
            elements[unique_count].first_pos = i;
            unique_count++;
        }
    }
    
    // 冒泡排序：按频率降序，频率相同按首次出现位置升序
    for (int i = 0; i < unique_count - 1; i++) {
        for (int j = 0; j < unique_count - i - 1; j++) {
            if (elements[j].count < elements[j + 1].count || 
                (elements[j].count == elements[j + 1].count && 
                 elements[j].first_pos > elements[j + 1].first_pos)) {
                // 交换元素
                Element temp = elements[j];
                elements[j] = elements[j + 1];
                elements[j + 1] = temp;
            }
        }
    }
    
    // 重建排序后的数组
    int *result = (int *)malloc(n * sizeof(int));
    int index = 0;
    for (int i = 0; i < unique_count; i++) {
        for (int j = 0; j < elements[i].count; j++) {
            result[index++] = elements[i].value;
        }
    }
    
    // 输出结果
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]");
    
    // 释放内存
    free(arr);
    free(elements);
    free(result);
    
    return 0;
}