#include <stdio.h>

int main(void) {
    int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    int i, j, s = 0;
    // 포인터 연산으로 배열 접근 최적화
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            s += *(*(a + i) + j);
    printf("%d\n", s);
    return 0;
}
