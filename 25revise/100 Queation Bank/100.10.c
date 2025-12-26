/*输入11个整数，如果第1个数为1，
则将其中的第2至11个数升序排列；如果第1个数为0，则降序排列。
输入格式
输入一行，包含11个整数，用空格符分隔。

输出格式
输出1行，包含10个顺序排列的整数，用空格符分隔。

输入样例
1 2 3 5 7 9 1 4 8 6 10
输出样例
1 2 3 4 5 6 7 8 9 10
*/
#include <stdio.h>

int main() {
    int nums[11];
    int i, j, temp;
    
    // 读取11个整数
    for(i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
    }
    
    // 对第2到11个数（即索引1到10）进行排序
    for(i = 1; i < 11; i++) {
        for(j = i + 1; j < 11; j++) {
            // 如果第一个数是1，升序排列
            if(nums[0] == 1) {
                if(nums[i] > nums[j]) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
            // 如果第一个数是0，降序排列
            else if(nums[0] == 0) {
                if(nums[i] < nums[j]) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
    
    // 输出排序后的第2到11个数
    for(i = 1; i < 11; i++) {
        printf("%d", nums[i]);
        if(i < 10) {
            printf(" ");
        }
    }
    
    return 0;
}