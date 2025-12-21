#include <stdio.h>

int main() {
    int target, n;
    int arr[100];
    
    scanf("%d", &target);
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //冒泡排序
    for (int i = 0; i < n - 1; i++) {
        //最后一次已经拍好了，所以i,j小于n-1即可，从小到大排序
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    int left = 0;
    int right = n - 1;
    int found = -1;
    //二分法查询
    while (left <= right) {
        int mid = (left + right) / 2;
       //总是在每次循环之查询之前定义mid，不断缩小范围
        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    printf("%d", found);
    
    return 0;
}