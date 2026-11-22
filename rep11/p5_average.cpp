#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S {
    int k, e, m;
};

int main(void) {
    struct S a[2] = { 0 };
    FILE* p = fopen("my.bin", "rb");
    // 파일 열기 실패 확인
    if (p == NULL) {
        return 1;
    }
    // 파일 읽기 성공 여부 확인
    if (fread(a, sizeof(struct S), 2, p) != 2) {
        fclose(p);
        return 1;
    }
    fclose(p);
    printf("개인1: %.2f, 개인2: %.2f\n", (a[0].k + a[0].e + a[0].m) / 3.0, (a[1].k + a[1].e + a[1].m) / 3.0);
    printf("과목1: %.2f, 과목2: %.2f, 과목3: %.2f\n", (a[0].k + a[1].k) / 2.0, (a[0].e + a[1].e) / 2.0, (a[0].m + a[1].m) / 2.0);
    return 0;
}
