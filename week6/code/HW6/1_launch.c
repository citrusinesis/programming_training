#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 60; i >= 0; i--) {
        printf("%d ", i);
        sleep(1);
    }
    printf("발사\n");
}