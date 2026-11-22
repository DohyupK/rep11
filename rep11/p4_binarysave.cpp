#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S {
    int k, e, m;
};

int main(void) {
    struct S a[2] = { { 80, 90, 85 },{ 70, 75, 95 } };
    FILE* p = fopen("my.bin", "wb");
    // 파일 열기 실패 확인
    if (p == NULL) {
        return 1;
    }
    // fwrite 반환값 쓰기 성공 여부 확인
    if (fwrite(a, sizeof(struct S), 2, p) != 2) {
        fclose(p);
        return 1;
    }
    // 파일 닫기
    fclose(p);
    return 0;
}
