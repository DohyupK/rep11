#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 역순 출력 기능 분리 (재사용 가능)
void print_reverse(char str[]) {
    // strlen()을 한 번만 호출
    for (int i = (int)strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main(void) {
    char str[100] = { 0 }; // 초기화로 미사용 메모리 접근 방지
    printf("문장 입력: ");

    // fgets()로 입력 크기 제한 및 버퍼 오버플로 방지
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';
    // 문자열 끝에서부터 거꾸로 한 글자씩 출력
    print_reverse(str);
    return 0;
}