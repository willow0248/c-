#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *score, i;
    float avg = 0;
    int max, min;
    printf("Enter number of students: ");
    scanf("%d", &n);
    score = (int *)malloc(n * sizeof(int));
    printf("Enter scores: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &score[i]);
        avg += score[i];
    }
    avg /= n;
    max = min = score[0];
    for (i = 1; i < n; i++) {
        if (score[i] > max) max = score[i];
        if (score[i] < min) min = score[i];
    }
    printf("Average: %.2f\nMax: %d\nMin: %d\n", avg, max, min);
    free(score);
    return 0;
}