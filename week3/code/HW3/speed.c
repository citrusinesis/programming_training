#include <stdio.h>

int main() {
    double distance, time, min, sec;

    printf("거리를 미터로 입력하시오: ");
    scanf("%lf", &distance);
    printf("시간을 입력하시오: ");
    scanf("%lf", &time);
    printf("분을 입력하시오: ");
    scanf("%lf", &min);
    printf("초를 입력하시오: ");
    scanf("%lf", &sec);

    double totalTime = time + (min * (1.0 / 60.0)) + (sec * (1.0 / 3600.0));
    double distanceKm = distance / 1000;
    printf("속도: %lf\n", distanceKm / totalTime);
}