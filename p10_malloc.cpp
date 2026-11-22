#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* arr;
    int sum = 0;
    arr = (int*)malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }
    arr[0] = 11;
    arr[1] = 33;
    arr[2] = 55;
    for (int i = 0; i < 3; i++) {
        sum += arr[i];
    }
    // 최댓값과 최솟값 계산
    int max = arr[0], min = arr[0];

    for (int i = 1; i < 3; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("세 정수의 합: %d\n", sum);
    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
    free(arr);
    return 0;
}
