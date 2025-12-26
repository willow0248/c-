/*有一批易感人群住在网格状的宿舍区内，宿舍区为n*n的矩阵，
每个格点为一个房间，房间里可能住人，也可能空着。
在第一天，有些房间里的人得了流感，
以后每天，得流感的人会使其邻居传染上流感，（已经得病的不变），空房间不会传染。
请输出第m天得流感的人数。
输入格式
第一行一个数字n，n不超过100，表示有n*n的宿舍房间。
接下来的n行，每行n个字符，’.’表示第一天该房间住着健康的人，’#’表示该房间空着，’@’表示第一天该房间住着得流感的人。
接下来的一行是一个整数m，m不超过100。

输出格式
输出第m天，得流感的人数。
输入样例
5
....#
.#.@.
.#@..
#....
.....
4
输出样例
16*/
#include<stdio.h>
int main(){
    char room[200][200];
    int n;
    scanf("%d",&n);

    for (int  i = 0; i <n; i++){
        // 使用getchar()读取换行符
        getchar();
        for (int j= 0; j<n; j++){
            scanf("%c",&room[i][j]);
        }
    }

    int m;
    scanf("%d",&m);

    for (int day = 1; day < m; day++){
        // 创建临时数组记录新感染的人
        char temp[200][200];
        // 先复制当前状态
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                temp[i][j] = room[i][j];
            }
        }
        
            for (int  i = 0; i < n; i++){
                for (int j= 0; j< n; j++){
                    if(room[i][j]=='@'){
                        // 感染上方邻居
                        if(i>0 && room[i-1][j]=='.'){
                            temp[i-1][j] = '@';
                        }
                        // 感染下方邻居
                        if(i<n-1 && room[i+1][j]=='.'){
                            temp[i+1][j] = '@';
                        }
                        // 感染左方邻居
                        if(j>0 && room[i][j-1]=='.'){
                            temp[i][j-1] = '@';
                         }
                        // 感染右方邻居
                        if(j<n-1 && room[i][j+1]=='.'){
                            temp[i][j+1] = '@';
                        }
                    }
                }
            }
        
            // 更新房间状态
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    room[i][j] = temp[i][j];
                }
            }
    }
    
    // 统计流感人数
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(room[i][j]=='@'){
                count++;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}