#include <stdio.h>

struct Student {
    char name[20];
    int kr;
    int en;
};

int main(void) {
    struct Student students[3] = {
        { "J.C. Shim", 90, 85 },
        { "G.D. Hong", 80, 95 },
        { "J.Y. Ko", 75, 90 }
    };

    int total = 0, max = 0, min = 200;
    for (int i = 0; i < 3; i++) {
        double avg = (students[i].kr + students[i].en) / 2.0;
        int score = students[i].kr + students[i].en;
        // 총점과 최고점, 최저점 계산
        total += score;
        if (score > max) max = score;
        if (score < min) min = score;
        printf("이름: %s, 국어: %d, 영어: %d, 평균: %.2f\n",
            students[i].name,
            students[i].kr,
            students[i].en,
            avg);
    }
    // 전체 평균과 최고점, 최저점 출력
    printf("전체 평균: %.2f\n", total / 6.0);
    printf("최고 총점: %d\n", max);
    printf("최저 총점: %d\n", min);
    return 0;
}
