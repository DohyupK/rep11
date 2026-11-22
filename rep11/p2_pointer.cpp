#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int a = 11, b = 22;
    int arr[2] = { 11, 22 }; // 배열 추가
    int (*sum)(int, int) = add;
    printf("%d\n", sum(arr[0], arr[1]));
    return 0;
}