#include <math.h>
#include <stdio.h>

double dist_2d() {
    double x1, x2, y1, y2;
    printf("첫번째 점의 좌표를 입력하시오:(x, y) ");
    scanf("%lf %lf", &x1, &y1);
    printf("두번째 점의 좌표를 입력하시오:(x, y) ");
    scanf("%lf %lf", &x2, &y2);

    return sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
}

int main() { printf("두점 사이의 거리는 %lf입니다.\n", dist_2d()); }