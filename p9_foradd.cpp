#include <stdio.h>

int main(void) {
    int sum = 0;
    int even = 0;
    int odd = 0;

    for (int i = 5; i <= 10; i++) {
        sum += i;
        if (i % 2 == 0) {
            even += i;  // 짝수 합
        }
        else {
            odd += i;   // 홀수 합
        }
    }
    printf("5부터 10까지의 합: %d\n", sum);
    printf("짝수의 합: %d\n", even);
    printf("홀수의 합: %d\n", odd);
    return 0;
}