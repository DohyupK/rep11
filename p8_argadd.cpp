#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main(int argc, char* argv[]) {
    int num1, num2, sum;
    char* end;
    // 개수 확인
    if (argc != 3) return 1;
    // 숫자 변환 및 입력 검증
    errno = 0;
    num1 = (int)strtol(argv[1], &end, 10);
    if (errno || *end || end == argv[1]) return 1;

    errno = 0;
    num2 = (int)strtol(argv[2], &end, 10);
    if (errno || *end || end == argv[2]) return 1;
    // 오버플로 방지
    if ((num2 > 0 && num1 > INT_MAX - num2) ||
        (num2 < 0 && num1 < INT_MIN - num2)) return 1;
    sum = num1 + num2;
    printf("두 수의 합: %d\n", sum);
    return 0;
}
