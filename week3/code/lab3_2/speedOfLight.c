#include <stdio.h>

int main() {
    double speed = 300000;
    double distance = 149600000;

    printf("빛의 속도는 %.6lfkm/s\n", speed);
    printf("태양과 지구와의 거리 %.6lfkm\n", distance);
    printf("도달 시간은 %.6lf분\n", distance / speed / 60);
}