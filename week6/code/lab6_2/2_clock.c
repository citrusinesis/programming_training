#include <stdio.h>
#include <unistd.h>

int main() {
    int hour, min, sec;
    hour = min = sec = 0;

    while (1) {
        printf("%2d: %2d: %2d\n", hour, min, sec++);

        if (sec == 60) {
            min += 1;
            sec = 0;
        }
        if (min == 60) {
            hour += 1;
            min = 0;
        }
        if (hour == 24) {
            hour = min = sec = 0;
        }
        sleep(1);
    }
}