#include <stdio.h>

int main(void) {
    int num1 = 22;
    int num2 = 33;
    // 두 수의 합 출력
    printf("두 수의 합: %d\n", num1 + num2);
    // 두 수의 크기 비교
    printf("더 큰 수: %d\n", num1 > num2 ? num1 : num2);
    return 0;
}
