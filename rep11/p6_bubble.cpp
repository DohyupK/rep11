#include <stdio.h>

int main(void) {
    int a[] = { 2, 4, 1, 5, 3 }, i, j, t;
    // 이미 정렬된 경우 불필요한 반복 방지
    for (i = 0; i < 4; i++) {
        int flag = 0;
        for (j = 0; j < 4 - i; j++)
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                flag = 1;
            }
        if (flag == 0)
            break;
    }
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    return 0;
}
