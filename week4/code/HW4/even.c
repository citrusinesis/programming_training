#include <stdio.h>

int main() {
    double kor, eng, math;

    printf("3과목의 점수를 입력한다: ");
    scanf("%lf %lf %lf", &kor, &eng, &math);

    printf("총점=%.2lf", kor + eng + math);
    printf("평균=%.2lf", (kor + eng + math) / 3);
}